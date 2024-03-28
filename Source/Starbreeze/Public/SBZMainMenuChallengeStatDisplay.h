#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeData.h"
#include "SBZChallengeProgressItem.h"
#include "SBZChallengeProgressStat.h"
#include "SBZWidgetBase.h"
#include "SBZMainMenuChallengeStatDisplay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuChallengeStatDisplay : public USBZWidgetBase {
    GENERATED_BODY()
public:
    USBZMainMenuChallengeStatDisplay();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StatInitialized(const FSBZChallengeData& InChallenge, const FSBZChallengeProgressStat& InProgressStat);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ItemInitialized(const FSBZChallengeProgressItem& InProgressItem);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChallengeInitialized(const FSBZChallengeData& InChallenge);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChallengeIdInitialized(const FString& InChallengeId);
    
};

