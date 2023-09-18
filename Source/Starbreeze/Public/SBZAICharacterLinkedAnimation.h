#pragma once
#include "CoreMinimal.h"
#include "SBZCharacterLinkedAnimation.h"
#include "SBZAICharacterLinkedAnimation.generated.h"

class ASBZAICharacter;
class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class USBZAICharacterLinkedAnimation : public USBZCharacterLinkedAnimation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsDownOnGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsDownOnGroundPanic: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DownOnGroundIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* EnterDownOnGroundIdlePanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DownOnGroundIdlePanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* ExitDownOnGroundIdlePanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* AICharacter;
    
public:
    USBZAICharacterLinkedAnimation();

};

