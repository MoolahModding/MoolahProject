#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESBZOnlineSessionPhase.h"
#include "SBZStateMachineSharedState.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZStateMachineSharedState : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnServerInAction);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ESBZOnlineSessionPhase OnlineSessionPhase;
    
    USBZStateMachineSharedState();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyServerInActionPhase();
    
};

