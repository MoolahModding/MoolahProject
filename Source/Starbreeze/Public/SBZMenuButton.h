#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "OnMenuButtonSelectedDelegate.h"
#include "OnMenuButtonStateChangedDelegate.h"
#include "SBZWidgetBase.h"
#include "SBZMenuButton.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class USBZMenuButton : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectionActionName;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuButtonStateChanged OnButtonFocusedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuButtonStateChanged OnButtonHoveredChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuButtonStateChanged OnButtonDisabledChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuButtonSelected OnButtonSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuButtonSelected OnDisabledButtonSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuButtonSelected OnButtonAlternativeSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuButtonSelected OnDisabledButtonAlternativeSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlternativeActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey AlternativeActionMouseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FocusedAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoverGivesFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectGivesFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlternativeGivesFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTriggerLastFocused;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDisabled;
    
public:
    USBZMenuButton();
    UFUNCTION(BlueprintCallable)
    void SetButtonDisabled(bool bInIsDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SelectButton();
    
protected:
    UFUNCTION()
    void NativeOnSelectionInputPressed();
    
    UFUNCTION()
    void NativeOnAlternativeSelectionInputPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DisabledButtonSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DisabledButtonAlternativeSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ButtonSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ButtonHoveredChanged(bool bInIsHovered);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ButtonFocusedChanged(bool bInHasFocus);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ButtonDisabledChanged(bool bInIsDisabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ButtonAlternativeSelected();
    
public:
    UFUNCTION(BlueprintCallable)
    void AlternativeSelectButton();
    
};

