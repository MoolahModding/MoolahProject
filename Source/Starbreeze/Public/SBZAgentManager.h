#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AI/Navigation/NavEdgeProviderInterface.h"
#include "SBZAgentManagerPostPhysicsTickFunction.h"
#include "SBZAgentManager.generated.h"

class ANavigationData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAgentManager : public UActorComponent, public INavEdgeProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAgentManagerPostPhysicsTickFunction PostPhysicsTickFunction;
    
public:
    USBZAgentManager();

    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerUnreliableRPC(uint64 ClientId, const TArray<uint8>& Data);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerReliableRPC(uint64 ClientId, const TArray<uint8>& Data);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void HandshakeRPC(const FString& Challenge);
    
    UFUNCTION(Client, Reliable)
    void HandshakeReplyRPC(const FString& Challenge, uint64 PrivateId);
    
    UFUNCTION(BlueprintCallable)
    void HandleNavDataRegistered(ANavigationData* NavData);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientUnreliableRPC(const TArray<uint8>& Data);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReliableRPC(const TArray<uint8>& Data);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ClientInitializedRPC(uint64 ClientId);
    

    // Fix for true pure virtual functions not being implemented
};

