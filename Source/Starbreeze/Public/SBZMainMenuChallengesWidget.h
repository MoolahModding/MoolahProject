#pragma once
#include "CoreMinimal.h"
#include "EChallengeStatusEnum.h"
#include "SBZChallengeData.h"
#include "SBZMenuStackScreenWidgetWithTutorial.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuChallengesWidget.generated.h"

class UPanelWidget;
class USBZChallengeCategoryData;
class USBZMainMenuBaseChallengeButton;
class USBZMenuButton;
class USBZWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuChallengesWidget : public USBZMenuStackScreenWidgetWithTutorial {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_ChallengeButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZWidgetBase* Widget_Loading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuBaseChallengeButton> ChallengeButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChallengesDisplayedPerPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZChallengeCategoryData* CategoryCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EChallengeStatusEnum> StatusesCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllStatuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PagesTotalCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PageCurrent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZMainMenuBaseChallengeButton*> ChallengeButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZMainMenuBaseChallengeButton* FocusedChallengeButton;
    
public:
    USBZMainMenuChallengesWidget();
    UFUNCTION(BlueprintCallable)
    void ToggleFilterStatus(EChallengeStatusEnum Status, bool ForceSingleOrNone);
    
    UFUNCTION(BlueprintCallable)
    void SetPage(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterCategory(const USBZChallengeCategoryData* Category);
    
    UFUNCTION(BlueprintCallable)
    void ResetFilterStatuses();
    
    UFUNCTION(BlueprintCallable)
    void PrevPage();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPagesChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewChallengedFocused(const FSBZChallengeData& InChallengeData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFilterStatusesChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFilterCategoryChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void NextPage();
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnChallengeButtonFocusedChanged(USBZMenuButton* InCategoryButton, bool bIsFocused);
    
public:
    UFUNCTION(BlueprintCallable)
    void CycleFilterStatuses();
    
};

