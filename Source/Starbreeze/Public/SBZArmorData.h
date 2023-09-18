#pragma once
#include "CoreMinimal.h"
#include "SBZArmorDamageScaleOverrideData.h"
#include "SBZInventoryBaseData.h"
#include "SBZArmorData.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZArmorData : public USBZInventoryBaseData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> GameplayEffectArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZArmorDamageScaleOverrideData> ArmorDamageScaleOverrideDataArray;
    
public:
    USBZArmorData();

};

