include_directories ( .. )
include_directories ( ${PROJECT_SOURCE_DIR}/util )

add_library(drakeJoints SHARED DrakeJoint.cpp FixedAxisOneDoFJoint.cpp HelicalJoint.cpp PrismaticJoint.cpp QuaternionFloatingJoint.cpp RevoluteJoint.cpp RollPitchYawFloatingJoint.cpp FixedJoint.cpp drakeJointUtil.cpp)

target_link_libraries(drakeJoints drakeGeometryUtil drakeGradientUtil)

# enable_testing()

pods_install_libraries(drakeJoints)
pods_install_headers(DrakeJoint.h FixedAxisOneDoFJoint.h HelicalJoint.h PrismaticJoint.h QuaternionFloatingJoint.h RevoluteJoint.h RollPitchYawFloatingJoint.h FixedJoint.h drakeJointUtil.h DESTINATION drake)
  
add_subdirectory(test)
