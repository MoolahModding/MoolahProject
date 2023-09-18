/* Copyright (C) 2019 Pedro Montoto García - All Rights Reserved
 *
 * You may use, distribute and modify this code under the
 * terms of the Apache License version 2.0.
 */

#include "TimeEnhancements.h"

#define LOCTEXT_NAMESPACE "FTimeEnhancementsModule"

void FTimeEnhancementsModule::StartupModule()
{
	UE_LOG(TimeEnhancementsLog, Log, TEXT("Loading TimeEnhancements Module"));
}

void FTimeEnhancementsModule::ShutdownModule()
{
	UE_LOG(TimeEnhancementsLog, Log, TEXT("Unloading TimeEnhancements Module"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FTimeEnhancementsModule, TimeEnhancements)