#include "CameraApp.h"

int main()
{
	Application* app = new CameraApp();
	app->run("Camera and Render", 1280, 720, false);
	delete app;
	return 0;
}