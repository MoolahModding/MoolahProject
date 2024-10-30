#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableState.generated.h"

USTRUCT(BlueprintType)
struct FSBZEquippableState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FireBuildupScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float StartFireBuildupScale;
    
    STARBREEZE_API FSBZEquippableState();
};

