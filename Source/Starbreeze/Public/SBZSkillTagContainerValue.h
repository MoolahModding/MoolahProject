#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZSkillValue.h"
#include "SBZSkillTagContainerValue.generated.h"

USTRUCT(BlueprintType)
struct FSBZSkillTagContainerValue : public FSBZSkillValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Value;
    
    STARBREEZE_API FSBZSkillTagContainerValue();
};

