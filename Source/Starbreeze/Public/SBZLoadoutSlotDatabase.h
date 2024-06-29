#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZLoadoutSlotDatabase.generated.h"

class USBZLoadoutSlotData;

UCLASS(Blueprintable)
class USBZLoadoutSlotDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZLoadoutSlotData*> LoadoutSlotArray;
    
    USBZLoadoutSlotDatabase();

};

