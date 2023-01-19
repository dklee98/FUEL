#include <exploration_manager/map_manager.h>

#include <plan_env/edt_environment.h>
#include <plan_env/sdf_map.h>

#include <active_perception/frontier_finder.h>

using namespace Eigen;

namespace fast_planner {

MapManager::MapManager()    {
}

MapManager::~MapManager()   {
}

void MapManager::init(ros::NodeHandle& nh)  {
    sdf_map_.reset(new SDFMap);
    sdf_map_->initMap(nh);
    edt_environment_.reset(new EDTEnvironment);
    edt_environment_->setMap(sdf_map_);
    frontier_finder_.reset(new FrontierFinder(edt_environment_, nh));

}

}   // namespace fast_planner