;; Auto-generated. Do not edit!


(when (boundp 'actionlib_tutorials::NwtrapGoal)
  (if (not (find-package "ACTIONLIB_TUTORIALS"))
    (make-package "ACTIONLIB_TUTORIALS"))
  (shadow 'NwtrapGoal (find-package "ACTIONLIB_TUTORIALS")))
(unless (find-package "ACTIONLIB_TUTORIALS::NWTRAPGOAL")
  (make-package "ACTIONLIB_TUTORIALS::NWTRAPGOAL"))

(in-package "ROS")
;;//! \htmlinclude NwtrapGoal.msg.html


(defclass actionlib_tutorials::NwtrapGoal
  :super ros::object
  :slots (_order ))

(defmethod actionlib_tutorials::NwtrapGoal
  (:init
   (&key
    ((:order __order) 0)
    )
   (send-super :init)
   (setq _order (round __order))
   self)
  (:order
   (&optional __order)
   (if __order (setq _order __order)) _order)
  (:serialization-length
   ()
   (+
    ;; int32 _order
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _order
       (write-long _order s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _order
     (setq _order (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get actionlib_tutorials::NwtrapGoal :md5sum-) "6889063349a00b249bd1661df429d822")
(setf (get actionlib_tutorials::NwtrapGoal :datatype-) "actionlib_tutorials/NwtrapGoal")
(setf (get actionlib_tutorials::NwtrapGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#goal definition
int32 order

")



(provide :actionlib_tutorials/NwtrapGoal "6889063349a00b249bd1661df429d822")


