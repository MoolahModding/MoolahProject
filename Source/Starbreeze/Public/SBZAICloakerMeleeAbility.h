#pragma once
#include "CoreMinimal.h"
#include "SBZMeleeAbility.h"
#include "SBZAICloakerMeleeAbility.generated.h"

class ASBZAICharacter;
class ASBZPlayerCharacter;
class ASBZPlayerState;
class UAkAudioEvent;
class UAnimMontage;
class USBZOutlineAsset;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable)
class USBZAICloakerMeleeAbility : public USBZMeleeAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitAcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZVoiceCommentDataAsset* TauntDuringAssault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloakerTakedown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* OutlineAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* CloakerTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* RegisteredPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* AICharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentMeleeMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentBeatOnGroundMontage;
    
public:
    USBZAICloakerMeleeAbility();
};

