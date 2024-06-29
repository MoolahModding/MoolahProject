#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZAnimatedInteractionAbility.generated.h"

class ISBZAnimatedInteractionInterface;
class USBZAnimatedInteractionInterface;
class UAnimMontage;
class USBZAnimatedInteractionData;

UCLASS(Blueprintable)
class USBZAnimatedInteractionAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentInteractionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISBZAnimatedInteractionInterface> CurrentAnimatedInteractionInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAnimatedInteractionData* CurrentAnimatedInteractionData;
    
public:
    USBZAnimatedInteractionAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
};

