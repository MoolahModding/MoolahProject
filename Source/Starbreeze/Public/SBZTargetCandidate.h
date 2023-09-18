#pragma once
#include "CoreMinimal.h"
#include "SBZTargetCandidate.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZTargetCandidate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    STARBREEZE_API FSBZTargetCandidate();
};

