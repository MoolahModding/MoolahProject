#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SBZEquippableAnimation.generated.h"

class ASBZEquippable;
class UAnimSequenceBase;
class USBZEquippableAnimationCollection;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API USBZEquippableAnimation : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* IdlePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZEquippable* Equippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZEquippableAnimationCollection* AnimationCollection;
    
public:
    USBZEquippableAnimation();

};

