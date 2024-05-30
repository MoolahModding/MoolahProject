#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZWidgetBase.h"
#include "PD3AmmoAttributeWidget.generated.h"

class ASBZPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class UPD3AmmoAttributeWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute AmmoLoadedGameplayAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute AmmoInventoryGameplayAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* SBZPlayerState;
    
public:
    UPD3AmmoAttributeWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup(float AmmoLoadedSetup, float AmmoInventorySetup, float AmmoTotal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAmmoUpdated(float AmmoLoadedUpdated, float AmmoInventoryUpdated, float AmmoTotal);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializePlayerState(ASBZPlayerState* InSBZPlayerState);
    
};

