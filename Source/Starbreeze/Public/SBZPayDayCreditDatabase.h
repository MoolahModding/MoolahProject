#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZPayDayCreditDatabase.generated.h"

class USBZPayDayCreditData;

UCLASS(Blueprintable)
class USBZPayDayCreditDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZPayDayCreditData*> PayDayCreditArray;
    
    USBZPayDayCreditDatabase();
};

