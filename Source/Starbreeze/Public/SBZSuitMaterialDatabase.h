#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZSuitMaterialDatabase.generated.h"

class USBZSuitMaterialData;

UCLASS(Blueprintable)
class USBZSuitMaterialDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSuitMaterialData*> SuitMaterialArray;
    
    USBZSuitMaterialDatabase();
};

