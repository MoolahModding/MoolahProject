#pragma once
#include "CoreMinimal.h"
#include "SBZVolumeDamageData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSBZVolumeDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    STARBREEZE_API FSBZVolumeDamageData();
};

