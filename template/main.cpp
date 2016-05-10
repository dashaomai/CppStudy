#include <iostream>

#include "scene_cfg.h"

using namespace std;
/*
struct RayData {
  float x;
  float y;
  float angle;
};

template <typename T>
T ProcessStruct<T>(void) {
  RayData data = (RayData)T;

  if (data != NULL) {
    data.x = 1.0f;
    data.y = 2.0f;
    data.angle = 3.14f;
  }

  return data;
};
*/
int main(int argc, const char *argv[])
{
  // RayData data = ProcessStruct<RayData>();

  // cout << data.x << data.y << data.angle << endl;

  CSceneCfg sc;
  sc.Create();

  return 0;
}
