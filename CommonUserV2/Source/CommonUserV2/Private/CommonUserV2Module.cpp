// Copyright Epic Games, Inc. All Rights Reserved.

#include "CommonUserV2Module.h"

#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FCommonUserV2Module"

void FCommonUserV2Module::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FCommonUserV2Module::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCommonUserV2Module, CommonUserV2)