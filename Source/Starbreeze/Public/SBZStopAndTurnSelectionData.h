#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZStopAndTurnSelectionData.generated.h"

UCLASS(Blueprintable)
class USBZStopAndTurnSelectionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectionSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectionAngleThreshold;
    
    USBZStopAndTurnSelectionData();

};

