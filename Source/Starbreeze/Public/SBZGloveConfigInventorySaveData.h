#pragma once
#include "CoreMinimal.h"
#include "SBZGloveInventorySlot.h"
#include "SBZGloveConfigInventorySaveData.generated.h"

USTRUCT(BlueprintType)
struct FSBZGloveConfigInventorySaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGloveInventorySlot> GloveConfigSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZGloveInventorySlot> CheckedGloveConfigSlots;
    
    STARBREEZE_API FSBZGloveConfigInventorySaveData();
};

