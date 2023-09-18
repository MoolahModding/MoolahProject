#pragma once
#include "CoreMinimal.h"
#include "ESBZCharacterSlotStatus.h"
#include "SBZCharacterInventoryData.h"
#include "SBZCharacterSlotData.generated.h"

USTRUCT(BlueprintType)
struct FSBZCharacterSlotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCharacterInventoryData CharacterInventoryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexInInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCharacterSlotStatus SlotStatus;
    
    STARBREEZE_API FSBZCharacterSlotData();
};

