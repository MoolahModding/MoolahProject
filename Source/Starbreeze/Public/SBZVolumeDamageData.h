#pragma once
#include "CoreMinimal.h"
#include "SBZVolumeDamageData.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct FSBZVolumeDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    STARBREEZE_API FSBZVolumeDamageData();
};

