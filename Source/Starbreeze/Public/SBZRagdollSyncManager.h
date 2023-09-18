#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPD3HeistState.h"
#include "SBZRagdollInfo.h"
#include "SBZRagdollSyncData.h"
#include "SBZRagdollSyncManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZRagdollSyncManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FSBZRagdollInfo> Ragdolls;
    
public:
    USBZRagdollSyncManager();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RagdollSyncData(const TArray<FSBZRagdollSyncData>& InRagdollSyncData);
    
};

