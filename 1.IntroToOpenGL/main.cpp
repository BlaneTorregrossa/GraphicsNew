#include "IntroApp.h"

int main()
{
	Application* app = new IntroApp();
	app->run("Window", 800, 800, false);
	delete app;
}