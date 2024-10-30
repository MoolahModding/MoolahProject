#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TLMVoiceChatOnPlayerBlockUpdatedDelegate.h"
#include "TLMVoiceChatOnPlayerMuteUpdatedDelegate.h"
#include "TLMVoiceChatOnSessionParticipantsChange_EOSIdDelegate.h"
#include "TLMVoiceChatOnVoiceChatPlayerTalkingUpdatedDelegate.h"
#include "TLMVoiceChatSubsystem.generated.h"

UCLASS(Blueprintable)
class TLMVOICECHAT_API UTLMVoiceChatSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTLMVoiceChatOnVoiceChatPlayerTalkingUpdated OnVoiceChatPlayerTalkingUpdatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTLMVoiceChatOnPlayerMuteUpdated OnPlayerMuteUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTLMVoiceChatOnPlayerBlockUpdated OnPlayerBlockUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTLMVoiceChatOnSessionParticipantsChange_EOSId OnVoiceSessionParticipantsChange_EOSId;
    
    UTLMVoiceChatSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetVoiceChatEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPushToTalkEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerMuted(const FString& PlayerName, bool bMuted);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerBlocked(const FString& EOSUserId, bool bBlocked);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioOutputVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioOutputMute(const bool bMute);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioInputVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioInputMute(const bool bMute);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerInChannel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceChatEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPushToTalkEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayersInChannel(TArray<FString>& PlayersInChannel);
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerMuted(const FString& PlayerName, bool& bIsMuted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerIds(FString& PlatformUserId, FString& EOSUserId) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerBlocked(const FString& EOSUserId);
    
    UFUNCTION(BlueprintCallable)
    float GetAudioOutputVolume();
    
    UFUNCTION(BlueprintCallable)
    bool GetAudioOutputMute();
    
    UFUNCTION(BlueprintCallable)
    float GetAudioInputVolume();
    
    UFUNCTION(BlueprintCallable)
    bool GetAudioInputMute();
    
};

