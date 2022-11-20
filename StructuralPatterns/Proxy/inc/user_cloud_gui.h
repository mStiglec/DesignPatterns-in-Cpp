#ifndef USER_CLOUD_GUI_H
#define USER_CLOUD_GUI_H

#include <string>
#include <memory>

#include "cloud_service.h"

class UserCloudGUI{
	private:
		std::shared_ptr<CloudService> cloudService;

	public:
		UserCloudGUI(std::shared_ptr<CloudService> cloudService);

		void registerToCloud(std::string UID);
		void deregisterFromCloud(std::string UID);
		void connect(std::string UID);
		void disconnect(std::string UID);
		void downloadMyData();
		void uploadMyData();
};

#endif // USER_CLOUD_GUI_H

