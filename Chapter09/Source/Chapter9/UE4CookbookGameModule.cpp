#include "UE4CookbookGameModule.h"
#include "CookbookStyle.h"




void UE4CookbookGameModule::StartupModule()
{
	FDefaultGameModuleImpl::StartupModule();
	FCookbookStyle::Initialize();
}

void UE4CookbookGameModule::ShutdownModule()
{
	FCookbookStyle::Shutdown();
	FDefaultGameModuleImpl::ShutdownModule();
}
