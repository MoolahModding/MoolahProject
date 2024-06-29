#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZInventorySlotDatabase.generated.h"

class USBZInventorySlotData;

UCLASS(Blueprintable)
class USBZInventorySlotDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZInventorySlotData*> InventorySlotArray;
    
    USBZInventorySlotDatabase();

};

