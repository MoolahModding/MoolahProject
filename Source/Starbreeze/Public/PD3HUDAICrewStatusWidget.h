#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "PD3HUDAICrewStatusWidget.generated.h"

class ASBZAICrewState;
class UPD3DefeatTimerWidget;
class UPD3HUDPlayerDefeatStateWidget;

UCLASS(Blueprintable, EditInlineNew)
class UPD3HUDAICrewStatusWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3HUDPlayerDefeatStateWidget* Widget_AICrewDefeatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPD3DefeatTimerWidget* Widget_DefeatTimer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICrewState* AICrewState;
    
public:
    UPD3HUDAICrewStatusWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMaskedOnStateChanged(ASBZAICrewState* InAICrewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCharacterChanged(ASBZAICrewState* InAICrewState);
    
};

