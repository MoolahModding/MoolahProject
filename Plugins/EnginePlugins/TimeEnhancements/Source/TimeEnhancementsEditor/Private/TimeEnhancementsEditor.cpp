// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TimeEnhancementsEditor.h"

#define LOCTEXT_NAMESPACE "FTimeEnhancementsEditorModule"

DEFINE_LOG_CATEGORY(TimeEnhancementsEditorLog);

void FTimeEnhancementsEditorModule::StartupModule()
{
	UE_LOG(TimeEnhancementsEditorLog, Log, TEXT("Loading TimeEnhancementsEditor Module"));
}

void FTimeEnhancementsEditorModule::ShutdownModule()
{
	UE_LOG(TimeEnhancementsEditorLog, Log, TEXT("Unloading TimeEnhancementsEditor Module"));
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTimeEnhancementsEditorModule, TimeEnhancementsEditor)