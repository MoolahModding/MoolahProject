// Copyright Epic Games, Inc. All Rights Reserved.

#include "DummyFactories.h"

#define LOCTEXT_NAMESPACE "FDummyFactoriesModule"

void FDummyFactoriesModule::StartupModule()
{
	AkAudioEventAssetTypeActions = MakeShared<Dum_AkAudioEventAssetTypeActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(AkAudioEventAssetTypeActions.ToSharedRef());
}

void FDummyFactoriesModule::ShutdownModule()
{
	if(!FModuleManager::Get().IsModuleLoaded("AssetTools")) return;
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(AkAudioEventAssetTypeActions.ToSharedRef());
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDummyFactoriesModule, DummyFactories)