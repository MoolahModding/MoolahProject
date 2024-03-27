#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EPD3MiniGameState.h"
#include "ESBZDifficulty.h"
#include "SBZWidgetBase.h"
#include "PD3MiniGameWidgetBase.generated.h"

class UAkComponent;
class USBZMiniGameComponent;

UCLASS(Blueprintable, EditInlineNew)
class UPD3MiniGameWidgetBase : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBindAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName XAxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName YAxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float XAxisLastUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float YAxisLastUpdateTime;
    
public:
    UPD3MiniGameWidgetBase();
    UFUNCTION(BlueprintCallable)
    void SetMiniGameState(EPD3MiniGameState NewState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOwningMiniGameComponent(USBZMiniGameComponent* MiniGameComponet);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMiniGameWidgetPlaced(UAkComponent* AkComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMiniGameDifficulty(ESBZDifficulty HeistDifficulty, uint8 MiniGameDifficulty);
    
    UFUNCTION(BlueprintImplementableEvent)
    void MiniGameStateChanged(EPD3MiniGameState NewState);
    
    UFUNCTION(BlueprintPure)
    bool HasTag(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintPure)
    bool HasSkill(const FGameplayTag& Tag) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnYAxisChanged(float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnXAxisChanged(float Value);
    
};

