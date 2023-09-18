/* Copyright (C) 2019 Pedro Montoto García - All Rights Reserved
 *
 * You may use, distribute and modify this code under the
 * terms of the Apache License version 2.0.
 */

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(TimeEnhancementsLog, Log, All);

/**
 * Root of FTimeEnhancementsModule module implementation
 */
class FTimeEnhancementsModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	/** end of IModuleInterface implementation */
};
