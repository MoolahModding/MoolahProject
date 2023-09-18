#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZSensorMarkingData.h"
#include "SBZTool.h"
#include "SBZSensorTool.generated.h"

class AActor;
class UAkAudioEvent;
class UAkRtpc;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASBZSensorTool : public ASBZTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FSBZSensorMarkingData> BlueMarkedTargetsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FSBZSensorMarkingData> OrangeMarkedTargetsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SensorToolTargetVisibleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SensorToolTurnedOnEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SensorToolTurnedOffEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SensorToolModeSwitchedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* OnSensorToolTargetVisibleEventRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* OnSensorToolTurnedOnEventRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* OnSensorToolTurnedOffEventRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* OnSensorToolModeSwitchedEventRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SensorGlassMeshBounds;
    
public:
    ASBZSensorTool(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SensorToolTurnedOn();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SensorToolTurnedOff();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SensorToolTargetVisible();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SensorToolModeSwitched();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSensorToolTurnedOn(float ScanLineDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSensorToolTurnedOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSensorToolModeSwitched();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSensorTargetVisible();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMarkedTargetEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Multicast_SensorToolTurnedOn();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Multicast_SensorToolTurnedOff();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Multicast_SensorToolTargetVisible();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Multicast_SensorToolModeSwitched();
    
};

