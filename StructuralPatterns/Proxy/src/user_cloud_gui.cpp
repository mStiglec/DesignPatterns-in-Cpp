#include "../inc/user_cloud_gui.h"

UserCloudGUI::UserCloudGUI(std::shared_ptr<CloudService> _cloudService)
    : cloudService(_cloudService)
{}

void UserCloudGUI::registerToCloud(std::string UID)
{
  cloudService->registerUser(UID);
}

void UserCloudGUI::deregisterFromCloud(std::string UID)
{
  cloudService->deregisterUser(UID);
}

void UserCloudGUI::connect(std::string UID)
{
  cloudService->attach(UID);
}

void UserCloudGUI::disconnect(std::string UID)
{
  cloudService->dettach(UID);
}

void UserCloudGUI::downloadMyData()
{
  cloudService->downloadData();
}

void UserCloudGUI::uploadMyData()
{
  cloudService->uploadData();
}