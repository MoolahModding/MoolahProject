#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZArmorDatabase.generated.h"

class USBZArmorData;

UCLASS(Blueprintable)
class USBZArmorDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZArmorData*> ArmorArray;
    
    USBZArmorDatabase();

};

