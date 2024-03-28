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
    UFUNCTION(BlueprintImplementableEvent)
    void SecurityCameraStateChanged(ESBZCameraState CurrentState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SecurityCameraRuntimeStateChanged(uint8 NewState);
    
private:
    UFUNCTION()
    void OnSecurityCameraStateChanged(ESBZCameraState OldState, ESBZCameraState NewState);
    
    UFUNCTION()
    void OnSecurityCameraRuntimeStateChanged(uint8 NewState);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnNewTarget();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFocusedChanged(bool bIsFocused);
    
};

