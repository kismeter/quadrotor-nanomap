#ifndef POSE_MANAGER_H
#define POSE_MANAGER_H

typedef double Scalar;
typedef Eigen::Matrix<Scalar, 3, 1> Vector3;
typedef Eigen::Matrix<Scalar, 3, 3> Matrix3;
typedef Eigen::Matrix<Scalar, 4, 4> Matrix4;
typedef Eigen::Matrix<float, 4, 4>  Matrix4f; 

struct NanoMapPose {
  Matrix4f pose;
  uint32_t time_sec;
  uint32_t time_nsec;
};

class PoseManager {
 public:

  void AddPose(NanoMapPose pose){};
  void DeleteMemoryBeforeTime(uint32_t time_sec, uint32_t time_nsec){};

 private:
  std::vector<NanoMapPose> poses;

};

#endif