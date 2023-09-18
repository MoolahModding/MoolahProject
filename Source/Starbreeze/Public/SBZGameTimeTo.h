#pragma once
#include "CoreMinimal.h"
#include "SBZGameTimeTo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSBZGameTimeTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    STARBREEZE_API FSBZGameTimeTo();
};

