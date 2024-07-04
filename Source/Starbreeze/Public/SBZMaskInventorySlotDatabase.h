#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZMaskInventorySlotDatabase.generated.h"

class USBZMaskInventorySlotData;

UCLASS(Blueprintable)
class USBZMaskInventorySlotDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMaskInventorySlotData*> InventorySlotArray;
    
    USBZMaskInventorySlotDatabase();

};

