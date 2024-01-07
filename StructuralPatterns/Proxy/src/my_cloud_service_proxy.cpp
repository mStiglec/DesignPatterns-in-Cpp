#include "../inc/my_cloud_service_proxy.h"

#include <algorithm>
#include <chrono>
#include <iostream>
#include <stdexcept>
#include <string>
#include <thread>

void MyCloudServiceProxy::registerUser(std::string UID)
{
  cloudService->registerUser(UID);
  std::cout << "user: " << UID << " is registered" << std::endl;
}

void MyCloudServiceProxy::deregisterUser(std::string UID)
{
  cloudService->deregisterUser(UID);
  std::cout << "user: " << UID << " is deregistered" << std::endl;
}

void MyCloudServiceProxy::attach(std::string UID)
{
  if (checkResourceAvailability() || usersAttached > 4)
  {
    try
    {
      cloudService->attach(UID);
      numOfAvailProcessors -= 8;
      freeMemoryGB -= 1;
      std::cout << "user: " << UID << " is attached" << std::endl;
      std::cout << "number of attached users: " << ++usersAttached << std::endl;
    } catch (const std::out_of_range &e)
    {
      std::cout << "you can not connect, user: " << UID << " is not registered" << std::endl;
      return;
    }
  }
  else
  {
    std::cout << "Can not attach user: " << UID << " Not enough resources, try again later"
              << std::endl;
  }
}

void MyCloudServiceProxy::dettach(std::string UID)
{
  cloudService->dettach(UID);
  numOfAvailProcessors += 8;
  freeMemoryGB += 1;
  std::cout << "user: " << UID << " is dettached" << std::endl;
  std::cout << "number of attached users: " << --usersAttached << std::endl;
}

void MyCloudServiceProxy::downloadData()
{
  std::cout << "downloading data..." << std::endl;
  cloudService->downloadData();
  std::cout << "data downloaded" << std::endl;
}

void MyCloudServiceProxy::uploadData()
{
  std::cout << "uploading data..." << std::endl;
  cloudService->uploadData();
  std::cout << "data uploaded..." << std::endl;
}

int MyCloudServiceProxy::checkResourceAvailability()
{
  return (numOfAvailProcessors == 0 || freeMemoryGB - 1 <= 0) ? 0 : 1;
}

void MyCloudServiceProxy::setCloudService(std::shared_ptr<CloudService> cloudService)
{
  this->cloudService = cloudService;
}