#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeRewardItem.h"
#include "SBZWidgetBase.h"
#include "SBZMainMenuItemRewardDisplay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuItemRewardDisplay : public USBZWidgetBase {
    GENERATED_BODY()
public:
    USBZMainMenuItemRewardDisplay();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ItemInitialized(const FSBZChallengeRewardItem& InRewardItem);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InfamyInitialized(int32 InfamyPoints);
    
};

