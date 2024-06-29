#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "Input/Events.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "SBZWidgetBase.h"
#include "SBZInputKeySelector.generated.h"

class UButton;
class USBZInputKeyWidget;

UCLASS(Blueprintable, EditInlineNew)
class USBZInputKeySelector : public USBZWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKeySelected, FInputChord, SelectedKey);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnIsSelectingKeyChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord SelectedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button_Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInputKeyWidget* Widget_InputKey;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeySelected OnKeySelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsSelectingKeyChanged OnIsSelectingKeyChanged;
    
    USBZInputKeySelector();

    UFUNCTION(BlueprintCallable)
    void SetSelectedKey(const FInputChord& InSelectedKey);
    
    UFUNCTION(BlueprintCallable)
    FEventReply OnPreviewMouseButtonDown_Internal(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable)
    FEventReply OnPreviewKeyDown_Internal(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    FEventReply OnMouseWheel_Internal(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable)
    FEventReply OnMouseButtonDown_Internal(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable)
    FEventReply OnKeyUp_Internal(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    FEventReply OnKeyDown_Internal(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusLost_Internal(FFocusEvent InFocusEvent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnClicked_Internal();
    
};

