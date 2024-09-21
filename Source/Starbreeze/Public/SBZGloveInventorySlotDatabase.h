#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZGloveInventorySlotDatabase.generated.h"

class USBZGloveInventorySlotData;

UCLASS(Blueprintable)
class USBZGloveInventorySlotDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZGloveInventorySlotData*> InventorySlotArray;
    
    USBZGloveInventorySlotDatabase();

};

