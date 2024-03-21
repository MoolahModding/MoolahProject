#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZSuitInventorySlotDatabase.generated.h"

class USBZSuitInventorySlotData;

UCLASS(Blueprintable)
class USBZSuitInventorySlotDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSuitInventorySlotData*> InventorySlotArray;
    
    USBZSuitInventorySlotDatabase();
};

