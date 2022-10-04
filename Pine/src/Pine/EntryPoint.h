#pragma once

#ifdef PN_PLATFORM_WINDOWS


extern Pine::Application* Pine::CreateApplication();

int main(int argc, char** argv)
{
	Pine::Log::Init();
	PN_CORE_WARN("Initialized Log!");
	int a = 5;
	PN_INFO("Hello! Var={0}", a);

	auto app = Pine::CreateApplication();
	app->Run();
	delete app;
}

#endif