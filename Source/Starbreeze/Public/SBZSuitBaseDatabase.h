#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZSuitBaseDatabase.generated.h"

class USBZSuitBaseData;

UCLASS(Blueprintable)
class USBZSuitBaseDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSuitBaseData*> SuitBases;
    
    USBZSuitBaseDatabase();
};

