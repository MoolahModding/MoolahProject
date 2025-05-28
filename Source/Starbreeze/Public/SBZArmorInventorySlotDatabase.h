#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZArmorInventorySlotDatabase.generated.h"

class USBZArmorInventorySlotData;

UCLASS(Blueprintable)
class USBZArmorInventorySlotDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZArmorInventorySlotData*> InventorySlotArray;
    
    USBZArmorInventorySlotDatabase();

};

