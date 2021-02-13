// IMGUITest.cpp: 定义应用程序的入口点。
//

#include "IMGUITest.h"
#include <memory>
#include "App.h"

int main()
{
	std::shared_ptr<App> app = std::make_shared<App>();
	app->Run();
	return 0;
}
