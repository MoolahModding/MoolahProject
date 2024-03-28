#pragma once
#include "CoreMinimal.h"
#include "ESBZMaskVFXSlot.h"
#include "SBZCosmeticsDataAsset.h"
#include "SBZMaskVFXData.generated.h"

class USBZEmitterSpawnerData;

UCLASS(Blueprintable)
class USBZMaskVFXData : public USBZCosmeticsDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZMaskVFXSlot VFXSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZEmitterSpawnerData*> EmitterSpawnerArray;
    
public:
    USBZMaskVFXData();
};

