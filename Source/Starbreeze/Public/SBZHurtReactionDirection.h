#pragma once
#include "CoreMinimal.h"
#include "SBZHurtReactionAnimation.h"
#include "SBZHurtReactionDirection.generated.h"

USTRUCT(BlueprintType)
struct FSBZHurtReactionDirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZHurtReactionAnimation> Forward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZHurtReactionAnimation> Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZHurtReactionAnimation> Backward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZHurtReactionAnimation> Left;
    
    STARBREEZE_API FSBZHurtReactionDirection();
};

