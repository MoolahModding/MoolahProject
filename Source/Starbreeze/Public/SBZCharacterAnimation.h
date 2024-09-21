#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "OnMontageInstanceEndedMCDelegateDelegate.h"
#include "SBZCharacterAnimation.generated.h"

class ASBZCharacter;

UCLASS(Blueprintable, NonTransient)
class USBZCharacterAnimation : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMontageInstanceEndedMCDelegate OnMontageInstanceEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* Character;
    
public:
    USBZCharacterAnimation();

};

