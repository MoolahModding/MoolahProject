#pragma once
#include "CoreMinimal.h"
#include "ESBZCameraState.h"
#include "SBZWidgetBase.h"
#include "SBZViewTargetWidget.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class USBZViewTargetWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ViewTargetActor;
    
public:
    USBZViewTargetWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SecurityCameraStateChanged(ESBZCameraState CurrentState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SecurityCameraRuntimeStateChanged(uint8 NewState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSecurityCameraStateChanged(ESBZCameraState OldState, ESBZCameraState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnSecurityCameraRuntimeStateChanged(uint8 NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusedChanged(bool bIsFocused);
    
};

