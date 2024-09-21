#pragma once
#include "CoreMinimal.h"
#include "SBZGloveInventorySlot.h"
#include "SBZGloveInventorySlotAndIndex.generated.h"

USTRUCT(BlueprintType)
struct FSBZGloveInventorySlotAndIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZGloveInventorySlot GloveInventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    STARBREEZE_API FSBZGloveInventorySlotAndIndex();
};

