#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SBZLeftHandEquippableAnimation.generated.h"

class ASBZCharacter;
class ASBZEquippable;
class UAnimSequenceBase;
class USBZEquippableAnimationCollection;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API USBZLeftHandEquippableAnimation : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* UsingIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZEquippable* Equippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZEquippableAnimationCollection* AnimationCollection;
    
public:
    USBZLeftHandEquippableAnimation();

};

