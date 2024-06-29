#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZPrimaryToolWidget.h"
#include "SBZPrimaryHackingToolWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZPrimaryHackingToolWidget : public USBZPrimaryToolWidget {
    GENERATED_BODY()
public:
    USBZPrimaryHackingToolWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackinToolEquipped(bool bHasUpgrade02);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingSyncStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingSyncProgressChanged(float TimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingSyncNoAmmo(int32 InCost, int32 InCurrent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingSyncCompleted(bool bAlreadyHacked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingSyncAborted(bool bInAlreadySynched);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHackingDistanceToTarget(float MaxDistance, float CurrentDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTag(const FGameplayTag& Tag) const;
    
};

