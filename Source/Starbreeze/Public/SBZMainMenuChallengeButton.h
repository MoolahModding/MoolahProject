#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeData.h"
#include "SBZMenuButton.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuChallengeButton.generated.h"

class UPanelWidget;
class USBZMainMenuChallengeStatDisplay;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuChallengeButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ChallengeStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuChallengeStatDisplay> ChallengeStatWidget;
    
public:
    USBZMainMenuChallengeButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChallengeInititalized(const FSBZChallengeData& ChallengeData);
    
};

