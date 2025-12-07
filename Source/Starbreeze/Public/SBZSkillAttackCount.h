#pragma once
#include "CoreMinimal.h"
#include "SBZSkillAttackCount.generated.h"

USTRUCT(BlueprintType)
struct FSBZSkillAttackCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PrimaryEquippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SecondaryEquippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PrimaryThrowable;
    
    STARBREEZE_API FSBZSkillAttackCount();
};

