#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "SBZControlsReference.h"
#include "SBZHUDWidgetBase.h"
#include "SBZUIStackChangedEvent.h"
#include "SBZActionPhaseBaseWidget.generated.h"

class ASBZPlayerController;
class USBZControlsReferenceWidget;
class USBZHUDChatWidget;
class USBZWidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class USBZActionPhaseBaseWidget : public USBZHUDWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZWidgetBase* Widget_Playing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZWidgetBase* Widget_Spectating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZWidgetBase* Widget_Shared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZControlsReferenceWidget* Widget_ControlsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHUDChatWidget* Widget_Chat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OpenChatActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OpenHUDOverlayActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsChatDisabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> HudOverlayKeyMappingArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> ChatKeyMappingArray;
    
public:
    USBZActionPhaseBaseWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnStackStateChanged(FSBZUIStackChangedEvent UIStackStateChangedEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnStackLockChanged(bool bIsStackLocked);
    
    UFUNCTION(BlueprintCallable)
    void OnControllerStateChanged(ASBZPlayerController* PlayerController, const FName& OldStateName, const FName& NewStateName);
    
    UFUNCTION(BlueprintCallable)
    void OnActiveControlsReferenceChanged(const FSBZControlsReference& InControlsReference);
    
    UFUNCTION(BlueprintCallable)
    void HideControlsReference();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OpenHUDOverlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CloseHUDOverlay();
    
};

