#include <iostream>
#include <memory>

#include "../inc/user_cloud_gui.h"
#include "../inc/my_cloud_service.h"
#include "../inc/my_cloud_service_proxy.h"

int main(){
	std::shared_ptr<CloudService> cloudService = std::make_shared<MyCloudService>();
	std::shared_ptr<MyCloudServiceProxy> myCloudServiceProxy =
		std::make_shared<MyCloudServiceProxy>();

	//setting type of service dynamically
	myCloudServiceProxy->setCloudService(cloudService);

	// to userGUI we send proxy object (client does not know that he is using proxy because
	// interface of proxy and original object are the same)
	std::shared_ptr<UserCloudGUI> userCloudGUI = std::make_shared<UserCloudGUI>(myCloudServiceProxy);

	userCloudGUI->registerToCloud("001");
	userCloudGUI->registerToCloud("002");
	userCloudGUI->registerToCloud("003");
	userCloudGUI->registerToCloud("004");

	userCloudGUI->connect("001");
	userCloudGUI->connect("002");
	userCloudGUI->connect("003");
	userCloudGUI->connect("004");

	//not registered
	userCloudGUI->connect("005");

	userCloudGUI->disconnect("001");
	userCloudGUI->disconnect("002");
	userCloudGUI->disconnect("003");
	userCloudGUI->disconnect("004");

}