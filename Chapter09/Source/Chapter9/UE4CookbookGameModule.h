#pragma once

#include "ModuleManager.h"

class UE4CookbookGameModule : public FDefaultGameModuleImpl
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

