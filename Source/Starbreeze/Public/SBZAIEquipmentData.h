#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZEquippableConfig.h"
#include "SBZThrowableConfig.h"
#include "SBZAIEquipmentData.generated.h"

UCLASS(Blueprintable)
class USBZAIEquipmentData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZEquippableConfig> EquippableConfigArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZThrowableConfig> ThrowableConfigArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowableCooldown;
    
    USBZAIEquipmentData();

};

