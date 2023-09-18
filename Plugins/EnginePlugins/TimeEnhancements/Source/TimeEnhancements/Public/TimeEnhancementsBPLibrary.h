/* Copyright (C) 2019 Pedro Montoto García - All Rights Reserved
 *
 * You may use, distribute and modify this code under the
 * terms of the Apache License version 2.0.
 */

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TimeEnhancementsBPLibrary.generated.h"

#define SIXTY_FRAMES_PER_SECOND_FRAME_DURATION (1.0f/60.0f)

/**
 *	Static time-related helper functions
 */
UCLASS()
class UTimeEnhancementsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
public:

	/**
	 * Returns the amount of seconds (standard unreal float semantics, 1.0f = 1s) that a frame takes at 60FPS
	 */
	UFUNCTION(BlueprintPure, meta = (Keywords = "TimeEnhancements Frames"), Category = "TimeEnhancements")
	static FORCEINLINE float SixtyFramesPerSecondFrameDuration()
	{
		return SIXTY_FRAMES_PER_SECOND_FRAME_DURATION;
	};
};
