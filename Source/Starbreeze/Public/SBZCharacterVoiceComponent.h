#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ESBZVoiceGruntType.h"
#include "ESBZVoicePriority.h"
#include "SBZAIAlertnessComment.h"
#include "SBZAIAlertnessDialogRules.h"
#include "SBZCharacterCommentAssets.h"
#include "SBZPlayerCallEvent.h"
#include "SBZRandomDefaultSwitchStates.h"
#include "SBZVoiceEventData.h"
#include "SBZCharacterVoiceComponent.generated.h"

class ASBZCharacter;
class UAkAudioBank;
class UAkAudioEvent;
class UAkComponent;
class UAkRtpc;
class USBZDialogAnimDataCollection;
class USBZDialogDataAsset;
class USBZVoiceCommentDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZCharacterVoiceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VoiceAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform VoiceAttachOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* VoiceSpacialRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* VoiceFilterRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceFilterRTPCValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioBank*> SoundBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogAnimDataCollection* DialogAnimDataCollection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVoiceEventData VoiceEventDataArray[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> DefaultSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZRandomDefaultSwitchStates> RandomDefaultSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZRandomDefaultSwitchStates RandomVoiceSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StartFatigueEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StopFatigueEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FatigueRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCharacterCommentAssets CommentAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZAIAlertnessComment> AIAlertnessComments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSBZAIAlertnessDialogRules> AIAlertnessDialogRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RemoveLipSyncPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RemoveSubtitlePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RemoveSubtitleSuffix;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* SBZCharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* PerformsInDialog;
    
public:
    USBZCharacterVoiceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopTalking();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SaySystemComment(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority, bool bServerInstigated);
    
    UFUNCTION(BlueprintCallable)
    void SaySystemComment(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority, bool bReplicated, bool bServerInstigated);
    
    UFUNCTION(BlueprintCallable)
    void SayGrunt(ESBZVoiceGruntType GruntType);
    
    UFUNCTION(BlueprintCallable)
    void SayDialogLineByCharacterEvent(FString& CommentState);
    
    UFUNCTION(BlueprintCallable)
    void SayDialogLine(UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintCallable)
    void SayCharacterEvent(const FString& CommentState, const FSBZVoiceEventData& InCharacterVoiceEvent, ESBZVoicePriority InPlayingPriority);
    
    UFUNCTION(BlueprintCallable)
    void Say(UAkAudioEvent* AudioEvent, ESBZVoicePriority InPlayingPriority);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage();
    
    UFUNCTION(BlueprintCallable)
    void OnStaminaValueChanged(float NewValue, float OldValue, float MaxValue);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SaySystemComment_ServerInstigated(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SaySystemComment(const USBZVoiceCommentDataAsset* CommentDataAsset, ESBZVoicePriority InPlayingPriority);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleAudioComponentDeactivated(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void HandleAudioComponentActivated(UActorComponent* Component, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void CallRecieved(const FSBZPlayerCallEvent& CallEventData);
    
};

