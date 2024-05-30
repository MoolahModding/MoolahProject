#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBZTrafficLightStatus.h"
#include "SBZTrafficLightPool.h"
#include "SBZTrafficLightPoolState.h"
#include "SBZTrafficLights.generated.h"

class USBZAmbientSoundComponent;
class USBZTrafficManager;
class USBZTrafficSettings;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ASBZTrafficLights : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZTrafficLightPool> PoolArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZTrafficLightPoolState> PoolStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=Rep_ActivePoolStateIndex, meta=(AllowPrivateAccess=true))
    int32 ActivePoolIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NextPoolTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZTrafficManager* TrafficManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZTrafficSettings* TrafficSettings;
    
public:
    ASBZTrafficLights(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdatePool(ESBZTrafficLightStatus Status, const TArray<UStaticMeshComponent*>& Pool, const TArray<USBZAmbientSoundComponent*>& PedestrianSoundEmitters);
    
private:
    UFUNCTION(BlueprintCallable)
    void Rep_ActivePoolStateIndex();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetActivePool(int32 NewActivePoolIndex);
    
};

