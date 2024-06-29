#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "SBZEquippableInspectAbility.generated.h"

class UAnimMontage;
class USBZLocalPlayerFeedback;

UCLASS(Blueprintable)
class USBZEquippableInspectAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisableBlendOutAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> FeedbackClass;
    
public:
    USBZEquippableInspectAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
};

