#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableConfig.h"
#include "SBZWeaponConfigInventorySlot.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponConfigInventorySlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig EquippableConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PayedWeaponPartAttachmentItemIdArray;
    
    STARBREEZE_API FSBZWeaponConfigInventorySlot();
};

