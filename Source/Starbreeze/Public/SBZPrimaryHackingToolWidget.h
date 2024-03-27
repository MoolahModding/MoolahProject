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
    UFUNCTION(BlueprintImplementableEvent)
    void OnHackinToolEquipped(bool bHasUpgrade02);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHackingSyncStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHackingSyncProgressChanged(float TimeRemaining);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHackingSyncNoAmmo(int32 InCost, int32 InCurrent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHackingSyncCompleted(bool bAlreadyHacked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHackingSyncAborted(bool bInAlreadySynched);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHackingDistanceToTarget(float MaxDistance, float CurrentDistance);
    
    UFUNCTION(BlueprintPure)
    bool HasTag(const FGameplayTag& Tag) const;
    
};

