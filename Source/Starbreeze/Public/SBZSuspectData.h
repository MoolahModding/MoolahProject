#pragma once
#include "CoreMinimal.h"
#include "SBZSuspectData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZSuspectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    STARBREEZE_API FSBZSuspectData();
};

