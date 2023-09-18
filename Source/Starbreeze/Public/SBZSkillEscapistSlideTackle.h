#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZSkillData.h"
#include "SBZSkillEscapistSlideTackle.generated.h"

UCLASS(Blueprintable)
class USBZSkillEscapistSlideTackle : public USBZSkillData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AffectedAITypes;
    
    USBZSkillEscapistSlideTackle();

};

