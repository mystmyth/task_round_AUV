#include <ros/ros.h>
#include <actionlib/client/simple_action_client.h>
#include <actionlib/client/terminal_state.h>
#include <actionlib_tutorials/NwtrapAction.h>

int main (int argc, char **argv)
{
  ros::init(argc, argv, "test_nwtrap");

  
  
  actionlib::SimpleActionClient<actionlib_tutorials::NwtrapAction> ac("nwtrap", true);

  ROS_INFO("Waiting for action server to start.");
  
  ac.waitForServer(); 

  ROS_INFO("Action server started, sending goal.");
  
  actionlib_tutorials::NwtrapGoal goal;
  goal.order = 6;
  ac.sendGoal(goal);

  
  bool finished_before_timeout = ac.waitForResult(ros::Duration(30.0));

  if (finished_before_timeout)
  {
    actionlib::SimpleClientGoalState state = ac.getState();
    ROS_INFO("Action finished: %s",state.toString().c_str());
  }
  else
    ROS_INFO("Action did not finish before the time out.");

  
  return 0;
}
