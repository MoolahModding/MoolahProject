#pragma once
#include "CoreMinimal.h"
#include "SBZWrinkleCPDData.h"
#include "SBZWrinklesHandler.generated.h"

USTRUCT(BlueprintType)
struct FSBZWrinklesHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWrinkleCPDData> WrinkleCPDDataArray;
    
public:
    STARBREEZE_API FSBZWrinklesHandler();
};

