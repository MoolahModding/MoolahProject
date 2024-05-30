#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EPD3HeistState.h"
#include "ESBZDifficulty.h"
#include "SBZStatisticCriteriaData.generated.h"

class UPD3HeistDataAsset;

UCLASS(Blueprintable)
class USBZStatisticCriteriaData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPD3HeistDataAsset*> HeistDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDifficulty LowestDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPD3HeistState MaxPassableState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticCode;
    
    USBZStatisticCriteriaData();

};

