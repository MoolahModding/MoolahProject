#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerReadyInfo.h"
#include "SBZPlayerReadyStatusUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZPlayerReadyStatusUpdate, const TArray<FSBZPlayerReadyInfo>&, PlayerReadyStatus);

