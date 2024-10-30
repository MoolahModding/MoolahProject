#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableState.h"
#include "SBZReplicatedEquippableState.generated.h"

USTRUCT(BlueprintType)
struct FSBZReplicatedEquippableState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZEquippableState Array[3];
    
    STARBREEZE_API FSBZReplicatedEquippableState();
};

