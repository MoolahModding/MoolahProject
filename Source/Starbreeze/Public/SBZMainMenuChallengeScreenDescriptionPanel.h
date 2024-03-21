#pragma once
#include "CoreMinimal.h"
#include "SBZChallengeData.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuChallengeScreenDescriptionPanel.generated.h"

class UPanelWidget;
class USBZMainMenuChallengeStatDisplay;
class USBZMainMenuItemRewardDisplay;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuChallengeScreenDescriptionPanel : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ChallengeStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ItemRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuChallengeStatDisplay> ChallengeStatWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuItemRewardDisplay> ItemRewardWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxStatWidgetsDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxItemWidgetsDisplayed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuChallengeStatDisplay*> CachedStatWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuItemRewardDisplay*> CachedItemWidgets;
    
public:
    USBZMainMenuChallengeScreenDescriptionPanel();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEmpty();
    
    UFUNCTION(BlueprintCallable)
    void SetChallengeData(const FSBZChallengeData& InChallengeData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeDataUpdated(const FSBZChallengeData& InChallengeData);
    
};

