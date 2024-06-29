#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZCoinDatabase.generated.h"

class USBZCoinData;

UCLASS(Blueprintable)
class USBZCoinDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZCoinData*> CoinsArray;
    
    USBZCoinDatabase();

};

