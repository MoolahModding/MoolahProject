#pragma once
#include "CoreMinimal.h"
#include "SBZArmorDamageScaleOverrideData.h"
#include "SBZInventoryBaseData.h"
#include "Templates/SubclassOf.h"
#include "SBZArmorData.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class USBZArmorData : public USBZInventoryBaseData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GameplayEffectArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZArmorDamageScaleOverrideData> ArmorDamageScaleOverrideDataArray;
    
public:
    USBZArmorData();
};

