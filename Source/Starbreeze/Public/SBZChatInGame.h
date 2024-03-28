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
    ASBZChatInGame();
protected:
    UFUNCTION(Reliable, Server)
    void ServerChatMessageReceived(int32 PlayerId, const FSBZPlayerChatEvent& PlayerChatEvent);
    
    UFUNCTION(Reliable, Server)
    void ServerCallMessageReceived(APlayerState* PlayerState, uint8 CallIndex);
    
public:
    UFUNCTION()
    void SendChatMessageToServer(const FSBZPlayerChatEvent& ChatEventData);
    
    UFUNCTION()
    void SendCallMessageToServer(const FSBZPlayerCallEvent& CallEventData);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastChatMessageReceived(int32 PlayerId, const FSBZPlayerChatEvent& PlayerChatEvent);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastCallMessageReceived(APlayerState* PlayerState, uint8 CallIndex);
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientSubscribeToChatMessages();
    
};

