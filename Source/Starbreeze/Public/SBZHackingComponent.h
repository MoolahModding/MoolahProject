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
    USBZHackingComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHackingState(ESBZHackingState NewHackingState);
    
protected:
    UFUNCTION()
    void OnRep_HackingState();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetHackingState(ESBZHackingState NewHackingState);
    
public:
    UFUNCTION(BlueprintPure)
    ESBZHackingState GetHackingState() const;
    
};

