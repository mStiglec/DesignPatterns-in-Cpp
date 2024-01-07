#ifndef MY_CLOUD_SERVICE_H
#define MY_CLOUD_SERVICE_H

#include <unordered_map>

#include "cloud_service.h"

class MyCloudService : public CloudService {
  private:
    std::unordered_map<std::string, bool> userStatus;

  public:
    MyCloudService() = default;

    void registerUser(std::string UID) override;
    void deregisterUser(std::string UID) override;
    void attach(std::string UID) override;
    void downloadData() override;
    void uploadData() override;
    void dettach(std::string UID) override;
};

#endif  // MY_CLOUD_SERVICE_H
