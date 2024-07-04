#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "SBZButtonControlReference.h"
#include "SBZInfoPopupText.h"
#include "SBZInternetStatusWidget.h"
#include "SBZUIPopupData.h"
#include "SBZLoginScreenBaseWidget.generated.h"

class UButton;
class UCanvasPanel;
class UCircularThrobber;
class UImage;
class UOverlay;
class USBZLoginScreenWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZLoginScreenBaseWidget : public USBZInternetStatusWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInfoPopupText PrivacyPolicyContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInfoPopupText EULAContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInfoPopupText EpilepsyWarningContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInfoPopupText TelemetryContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInfoPopupText GameSenseContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZInfoPopupText CrossplayContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference PopUpAcceptAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference PopUpCancelAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference PopUpOptInAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference PopUpOptOutAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZUIPopupData PopUpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InvalidUserNameOrPassword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRememeberDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCircularThrobber* LoadingThrobber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* LoadingCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLoginScreenWidget* LoginScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LogoP3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* ClickToStartButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ClickToStartOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsWidgetReady;
    
public:
    USBZLoginScreenBaseWidget();

    UFUNCTION(BlueprintCallable)
    void WidgetReady();
    
    UFUNCTION(BlueprintCallable)
    void ShowPrivacyPolicyPopup();
    
    UFUNCTION(BlueprintCallable)
    void ShowEULAPopup();
    
    UFUNCTION(BlueprintCallable)
    void ShowEpilepsyWarningPopup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLoginPanelsVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLoadingPanelVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadingCanvasPanelVisibility(ESlateVisibility InVisibility);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPrivacyPopUpClosed(FName ClosingActionName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrivacyPolicyChoice(FName ClosingActionName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoginError(const FText& ErrorMessage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeDone();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEULAPopUpClosed(FName ClosingActionName);
    
    UFUNCTION(BlueprintCallable)
    void OnEpilepsyPopUpClosed(FName ClosingActionName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeLoginMenu();
    
    UFUNCTION(BlueprintCallable)
    void InitializeDone();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCanvasPanel* GetLoadingCanvasPanel();
    
};

