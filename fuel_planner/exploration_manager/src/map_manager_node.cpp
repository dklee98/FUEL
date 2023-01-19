#include <ros/ros.h>
#include <exploration_manager/map_manager.h>

#include <plan_manage/backward.hpp>
namespace backward {
backward::SignalHandling sh;
}

using namespace fast_planner;

int main(int argc, char** argv) {
  ros::init(argc, argv, "map_manager_node");
  ros::NodeHandle nh("~");
  
  MapManager map_manager_;
  map_manager_.init(nh);
  // FastExplorationFSM expl_fsm;
  // expl_fsm.init(nh);

  ros::Duration(1.0).sleep();
  ros::spin();

  return 0;
}
