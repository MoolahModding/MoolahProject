#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeData.h"
#include "SBZWidgetBase.h"
#include "SBZRewardWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZRewardWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
    USBZRewardWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnInfamyChanged(const int32 NewInfamyExperience, const int32 PreviousInfamyExperience, const int32 NewRenownLevel, const int32 PreviousRenownLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnChallengeCompleted(const FSBZChallengeData& ChallengeData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InfamyExperinceChanged(int32 PreviousInfamyExperince, int32 CurrentInfamyExperience, int32 SkillPointsEarned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChallengeCompleted(const FSBZChallengeData& ChallengeData);
    
};

