#ifndef _MAP_MANAGER_H_
#define _MAP_MANAGER_H_

#include <ros/ros.h>
#include <Eigen/Eigen>

using std::shared_ptr;
using std::unique_ptr;

namespace fast_planner {

class EDTEnvironment;
class SDFMap;
class FrontierFinder;

class MapManager    {
public:
    MapManager();
    ~MapManager();

    void init(ros::NodeHandle& nh);


private:
    shared_ptr<EDTEnvironment> edt_environment_;
    shared_ptr<SDFMap> sdf_map_;
    shared_ptr<FrontierFinder> frontier_finder_;

};

}   // namespace map_manager

#endif