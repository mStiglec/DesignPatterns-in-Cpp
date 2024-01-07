#ifndef MY_CLOUD_SERVICE_PROXY_H
#define MY_CLOUD_SERVICE_PROXY_H

#include <memory>
#include <string>

#include "cloud_service.h"
#include "my_cloud_service.h"

class MyCloudServiceProxy : public CloudService {
  private:
    int numOfAvailProcessors = 64;
    int freeMemoryGB = 1025;
    int usersAttached = 0;
    std::shared_ptr<CloudService> cloudService;

  public:
    MyCloudServiceProxy() = default;

    void registerUser(std::string UID) override;
    void deregisterUser(std::string UID) override;
    void attach(std::string UID) override;
    void downloadData() override;
    void uploadData() override;
    void dettach(std::string UID) override;

    int checkResourceAvailability();

    void setCloudService(std::shared_ptr<CloudService> cloudService);
};

#endif  // MY_CLOUD_SERVICE_PROXY_H
