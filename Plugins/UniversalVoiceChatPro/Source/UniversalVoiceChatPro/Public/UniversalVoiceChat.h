#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UniversalVoiceChat.generated.h"

class APlayerState;
class APlayerVoiceChatActor;
class UObject;

UCLASS(Blueprintable)
class UNIVERSALVOICECHATPRO_API UUniversalVoiceChat : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUniversalVoiceChat();

    UFUNCTION(BlueprintCallable)
    static bool VoiceChatWasInitAudioVoiceChatQuality();
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatStopSpeak();
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatStartSpeak(bool _shouldHearMyOwnVoice, bool isGlobal, int32 radioChannel, bool useProximity, float maxProximityRange);
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatSetMicrophoneVolume(float volume);
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatRemoveChannel(int32 channelToRemove);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void VoiceChatLocalMuteSomeone(const UObject* WorldContextObject, APlayerState* playerToMute, bool shouldMute);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool VoiceChatLocalIsMutedSomeone(const UObject* WorldContextObject, APlayerState* playerToCheckMute);
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatInitAudioVoiceChatQuality(int32 _sampleRate, int32 _numChannels);
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatHasMicrophonePermission();
    
    UFUNCTION(BlueprintCallable)
    static APlayerVoiceChatActor* VoiceChatGetMyLocalPlayerVoiceChat();
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatCheckRegisteredToChannel(int32 channelToCheck);
    
    UFUNCTION(BlueprintCallable)
    static void VoiceChatAskMicrophonePermission();
    
    UFUNCTION(BlueprintCallable)
    static bool VoiceChatAddChannel(int32 channelToAdd);
    
};

