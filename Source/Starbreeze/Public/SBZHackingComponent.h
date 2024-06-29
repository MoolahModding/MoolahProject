#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESBZHackingState.h"
#include "SBZHackingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZHackingComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HackingState, meta=(AllowPrivateAccess=true))
    ESBZHackingState HackingState;
    
public:
    USBZHackingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHackingState(ESBZHackingState NewHackingState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HackingState();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetHackingState(ESBZHackingState NewHackingState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZHackingState GetHackingState() const;
    
};

