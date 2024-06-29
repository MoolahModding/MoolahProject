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
    UFUNCTION(BlueprintCallable)
    void OnInfamyChanged(USBZInfamyManager* InfamyManager, int32 NewInfamyExperience, int32 PreviousInfamyExperience);
    
    UFUNCTION(BlueprintCallable)
    void OnChallengeCompleted(const FSBZChallengeData& ChallengeData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InfamyExperinceChanged(int32 PreviousInfamyExperince, int32 CurrentInfamyExperience, int32 SkillPointsEarned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChallengeCompleted(const FSBZChallengeData& ChallengeData);
    
};

