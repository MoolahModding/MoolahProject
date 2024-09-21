#pragma once
#include "CoreMinimal.h"
#include "SBZControlsReference.h"
#include "SBZPopupWidgetInterface.h"
#include "SBZUIFullscreenNotificationData.h"
#include "SBZWidgetBase.h"
#include "SBZFullScreenNotification.generated.h"

class USBZControlsReferenceWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZFullScreenNotification : public USBZWidgetBase, public ISBZPopupWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZControlsReferenceWidget* Widget_ControlsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZControlsReference DismissControlsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsShowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZUIFullscreenNotificationData Data;
    
public:
    USBZFullScreenNotification();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayedNewActiveNotification(const FSBZUIFullscreenNotificationData& NewNotificationData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnControlsReferenceClicked(FName InActionName);
    
public:
    UFUNCTION(BlueprintCallable)
    void DismissActiveNotification();
    

    // Fix for true pure virtual functions not being implemented
};

