#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "SBZPlayerCallEvent.h"
#include "SBZPlayerChatEvent.h"
#include "SBZChatInGame.generated.h"

class APlayerState;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZChatInGame : public AInfo {
    GENERATED_BODY()
public:
    ASBZChatInGame(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerChatMessageReceived(int32 PlayerId, const FSBZPlayerChatEvent& PlayerChatEvent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCallMessageReceived(APlayerState* PlayerState, uint8 CallIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void SendChatMessageToServer(const FSBZPlayerChatEvent& ChatEventData);
    
    UFUNCTION(BlueprintCallable)
    void SendCallMessageToServer(const FSBZPlayerCallEvent& CallEventData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastChatMessageReceived(int32 PlayerId, const FSBZPlayerChatEvent& PlayerChatEvent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCallMessageReceived(APlayerState* PlayerState, uint8 CallIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientSubscribeToChatMessages();
    
};

