;; Auto-generated. Do not edit!


(when (boundp 'iai_control_msgs::PTUFeedback)
  (if (not (find-package "IAI_CONTROL_MSGS"))
    (make-package "IAI_CONTROL_MSGS"))
  (shadow 'PTUFeedback (find-package "IAI_CONTROL_MSGS")))
(unless (find-package "IAI_CONTROL_MSGS::PTUFEEDBACK")
  (make-package "IAI_CONTROL_MSGS::PTUFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude PTUFeedback.msg.html


(defclass iai_control_msgs::PTUFeedback
  :super ros::object
  :slots (_status ))

(defmethod iai_control_msgs::PTUFeedback
  (:init
   (&key
    ((:status __status) "")
    )
   (send-super :init)
   (setq _status (string __status))
   self)
  (:status
   (&optional __status)
   (if __status (setq _status __status)) _status)
  (:serialization-length
   ()
   (+
    ;; string _status
    4 (length _status)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _status
       (write-long (length _status) s) (princ _status s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _status
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _status (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get iai_control_msgs::PTUFeedback :md5sum-) "4fe5af303955c287688e7347e9b00278")
(setf (get iai_control_msgs::PTUFeedback :datatype-) "iai_control_msgs/PTUFeedback")
(setf (get iai_control_msgs::PTUFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#feedback
string status


")



(provide :iai_control_msgs/PTUFeedback "4fe5af303955c287688e7347e9b00278")

