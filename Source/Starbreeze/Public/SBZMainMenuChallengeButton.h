#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeData.h"
#include "SBZMenuButton.h"
#include "SBZMainMenuChallengeButton.generated.h"

class UClass;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuChallengeButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ChallengeStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ChallengeStatWidget;
    
public:
    USBZMainMenuChallengeButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChallengeInititalized(const FSBZChallengeData& ChallengeData);
    
};

