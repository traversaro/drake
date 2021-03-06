#ifndef DRAKEJOINTUTIL_H_
#define DRAKEJOINTUTIL_H_

#include "DrakeJoint.h"
#include <string>
#include <Eigen/Core>
#include <Eigen/Geometry>
#include <memory>

// FIXME: delete this interface.  it's not needed anymore by the new parser

DLLEXPORT_DRAKEJOINT std::unique_ptr<DrakeJoint> createJoint(
    const std::string& joint_name, const Eigen::Isometry3d& transform_to_parent_body, int floating, const Eigen::Vector3d& joint_axis, double pitch);


#endif /* DRAKEJOINTUTIL_H_ */
