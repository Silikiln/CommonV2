// Copyright Epic Games, Inc. All Rights Reserved.

#include "Modules/ModuleManager.h"

/**
 * Implements the FCommonGameV2Module module.
 */
class FCommonGameV2Module : public IModuleInterface
{
public:
	FCommonGameV2Module();
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:

};


FCommonGameV2Module::FCommonGameV2Module()
{
}

void FCommonGameV2Module::StartupModule()
{
}

void FCommonGameV2Module::ShutdownModule()
{
}

IMPLEMENT_MODULE(FCommonGameV2Module, CommonGameV2);
