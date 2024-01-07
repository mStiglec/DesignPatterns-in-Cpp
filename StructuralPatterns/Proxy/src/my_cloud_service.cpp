#include "../inc/my_cloud_service.h"

#include <algorithm>
#include <chrono>
#include <iostream>
#include <string>
#include <thread>

void MyCloudService::registerUser(std::string UID)
{
  userStatus.insert({UID, 1});
}

void MyCloudService::deregisterUser(std::string UID)
{
  userStatus.erase(UID);
}

void MyCloudService::attach(std::string UID)
{
  userStatus.at(UID) = 1;
}

void MyCloudService::dettach(std::string UID)
{
  userStatus.at(UID) = 0;
}

void MyCloudService::downloadData()
{
  std::this_thread::sleep_for(std::chrono::milliseconds(3000));
}

void MyCloudService::uploadData()
{
  std::this_thread::sleep_for(std::chrono::milliseconds(3000));
}