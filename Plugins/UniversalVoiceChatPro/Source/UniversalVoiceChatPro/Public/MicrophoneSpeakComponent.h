#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MicrophoneSpeakComponent.generated.h"

class UAudioComponent;
class UMicrophoneSpeakComponent;
class USoundWaveProcedural;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNIVERSALVOICECHATPRO_API UMicrophoneSpeakComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDataMicrophoneReceived, const TArray<uint8>&, data);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataMicrophoneReceived OnDataMicrophoneReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* VoiceCaptureAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWaveProcedural* VoiceCaptureSoundWaveProcedural;
    
    UMicrophoneSpeakComponent();

    UFUNCTION(BlueprintCallable)
    bool startSpeaking(bool _shouldHearMyOwnVoice, bool isGlobal, int32 radioChannel, bool useRange, float maxRange);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceVolume(float volume);
    
    UFUNCTION(BlueprintCallable)
    void setAttenuationAssetPath(bool enableAttenuation, const FString& _pathToAttenuationAsset);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void RPCServerBroadcastVoiceData(const TArray<uint8>& data, int32 sampleRate, int32 numchannels, int32 PCMSize);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void RPCReceiveVoiceFromServer(UMicrophoneSpeakComponent* compToOutputVoice, const TArray<uint8>& dataEncoded, int32 sampleRate, int32 numchannels, int32 PCMSize);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void RPCClientTransmitVoiceData(const TArray<uint8>& data, int32 sampleRate, int32 numchannels, int32 PCMSize, bool _isGlobal, int32 _radioChannel, bool _useRange, float _maxRange);
    
    UFUNCTION(BlueprintCallable)
    void payloadReceivedVoiceData(const TArray<uint8>& dataEncoded, int32 sampleRate, int32 numchannels, int32 PCMSize);
    
    UFUNCTION(BlueprintCallable)
    void muteAudio(bool _isMuted);
    
    UFUNCTION(BlueprintCallable)
    bool isPlayingAudioVoice();
    
    UFUNCTION(BlueprintCallable)
    bool initAudioResources(int32 voiceSampleRate, int32 _voiceNumChannels);
    
    UFUNCTION(BlueprintCallable)
    void endSpeaking();
    
};

