#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "SBZEmoteAbility.generated.h"

class UAnimMontage;
class USBZLocalPlayerFeedback;

UCLASS(Blueprintable)
class USBZEmoteAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisableBlendOutAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> FeedbackClass;
    
public:
    USBZEmoteAbility();

private:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
};

