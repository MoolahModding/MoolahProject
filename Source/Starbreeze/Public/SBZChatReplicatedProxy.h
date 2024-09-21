#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZChatMessage.h"
#include "SBZChatReplicatedProxy.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZChatReplicatedProxy : public AActor {
    GENERATED_BODY()
public:
    ASBZChatReplicatedProxy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendChatMessage(const FSBZChatMessage& Message);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastReceiveChatMessage(const FSBZChatMessage& Message);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientSendChatMessage(const FSBZChatMessage& Message);
    
};

