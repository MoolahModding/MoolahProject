#pragma once
#include "CoreMinimal.h"
#include "SBZControlsReference.h"
#include "SBZPopupWidgetInterface.h"
#include "SBZWidgetBase.h"
#include "SBZPopupWidget.generated.h"

class UCanvasPanel;
class USBZControlsReferenceWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZPopupWidget : public USBZWidgetBase, public ISBZPopupWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZControlsReferenceWidget* Widget_ControlsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_PopUpBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZControlsReference DefaultControlsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZControlsReference ControlsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsShowing;
    
public:
    USBZPopupWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayPopUp();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActionPressed(FName ActionName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowing() const;
    
    UFUNCTION(BlueprintCallable)
    void HidePopUpWidget(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void AdvanceCountdown();
    
    
    // Fix for true pure virtual functions not being implemented
};

