#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESBZDamageWeight.h"
#include "ESBZHurtReactionDirection.h"
#include "ESBZHurtReactionPose.h"
#include "SBZHurtReactionLookup.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSBZHurtReactionLookup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDamageWeight Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZHurtReactionPose Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZHurtReactionDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    STARBREEZE_API FSBZHurtReactionLookup();
};

