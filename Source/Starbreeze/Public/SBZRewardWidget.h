#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeData.h"
#include "SBZWidgetBase.h"
#include "SBZRewardWidget.generated.h"

class USBZInfamyManager;

UCLASS(Blueprintable, EditInlineNew)
class USBZRewardWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    USBZRewardWidget();
private:
    UFUNCTION()
    void OnInfamyChanged(USBZInfamyManager* InfamyManager, int32 NewInfamyExperience, int32 PreviousInfamyExperience);
    
    UFUNCTION()
    void OnChallengeCompleted(const FSBZChallengeData& ChallengeData);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void InfamyExperinceChanged(int32 PreviousInfamyExperince, int32 CurrentInfamyExperience, int32 SkillPointsEarned);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChallengeCompleted(const FSBZChallengeData& ChallengeData);
    
};

