#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZWatchDatabase.generated.h"

class USBZWatchData;

UCLASS(Blueprintable)
class USBZWatchDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWatchData*> Watches;
    
    USBZWatchDatabase();

};

