#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "PlayerVoiceChatActor.generated.h"

class APlayerState;
class UMicrophoneSpeakComponent;
class USceneComponent;

UCLASS(Blueprintable)
class UNIVERSALVOICECHATPRO_API APlayerVoiceChatActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=RepNotifyMicComp, meta=(AllowPrivateAccess=true))
    UMicrophoneSpeakComponent* microphoneSpeakComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APlayerState* ownerPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 idVoiceChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=RepNotifyVoiceVolume, meta=(AllowPrivateAccess=true))
    float voiceVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> radioChannelSubscribed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=RepNotifyAttenuationAsset, meta=(AllowPrivateAccess=true))
    FString pathToAttenuationAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ServerPerformAntiCheat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AntiCheatAllowUseProximity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AntiCheatAllowUseGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AntiCheatMaxProximityRange;
    
    APlayerVoiceChatActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ServerSetMaxProximityRange(float _maxProximityRange);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetAttenuation(bool enableAttenuation, const FString& _pathToAttenuationAsset);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetAllowUseProximity(bool _allowUseRange);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetAllowUseGlobal(bool _allowUseGlobal);
    
    UFUNCTION(BlueprintCallable)
    void ServerRemoveChannel(int32 channelToRemove);
    
    UFUNCTION(BlueprintCallable)
    void ServerAddChannel(int32 channelToAdd);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void RPCServerUpdatePosAudioComp(FVector worldPos);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RPCClientSetMicrophoneVolume(float volume);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RPCClientAskRemoveChannel(int32 channelToRemove);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RPCClientAskAddChannel(int32 channelToAdd);
    
    UFUNCTION(BlueprintCallable)
    void RepNotifyVoiceVolume();
    
    UFUNCTION(BlueprintCallable)
    void RepNotifyMicComp();
    
    UFUNCTION(BlueprintCallable)
    void RepNotifyAttenuationAsset();
    
    UFUNCTION(BlueprintCallable)
    void muteAudio(bool isMute);
    
    UFUNCTION(BlueprintCallable)
    void DelegateEndPlayOwner(AActor* act, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

