#pragma once
#include "CoreMinimal.h"
#include "SBZMainteneanceBoxSequence.generated.h"

USTRUCT(BlueprintType)
struct FSBZMainteneanceBoxSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> Sequence;
    
    STARBREEZE_API FSBZMainteneanceBoxSequence();
};

