#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZChatMessage.h"
#include "SBZChatReplicatedProxy.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZChatReplicatedProxy : public AActor {
    GENERATED_BODY()
public:
    ASBZChatReplicatedProxy();
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSendChatMessage(const FSBZChatMessage& Message);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void MulticastReceiveChatMessage(const FSBZChatMessage& Message);
    
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientSendChatMessage(const FSBZChatMessage& Message);
    
};

