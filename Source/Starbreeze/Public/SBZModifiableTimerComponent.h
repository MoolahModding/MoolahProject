#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESBZTimerState.h"
#include "SBZTimerComponentDelegateDelegate.h"
#include "SBZTimerComponentStateDelegateDelegate.h"
#include "SBZTimerProgressionReachedDelegateDelegate.h"
#include "SBZModifiableTimerComponent.generated.h"

class ASBZSabotagePoint;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZModifiableTimerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ProgressionValuesToBroadcast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZSabotagePoint* SabotagePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentSpeed, meta=(AllowPrivateAccess=true))
    float CurrentSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NextProgressionValueIndex, meta=(AllowPrivateAccess=true))
    uint8 NextProgressionValueIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TimerState, meta=(AllowPrivateAccess=true))
    ESBZTimerState CurrentState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTimerComponentDelegate OnTimerSpeedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTimerProgressionReachedDelegate OnProgressionReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTimerComponentStateDelegate OnTimerStateChanged;
    
public:
    USBZModifiableTimerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerStartTimer();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerSetTimerSpeed(float NewSpeed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerResetTimer(bool bStartTimer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerPauseTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TimerState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NextProgressionValueIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentSpeed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetTimerState(ESBZTimerState NewState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetTimerSpeed(float NewSpeed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ResetTimer(bool bStartTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimerSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeElapsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgressMade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZTimerState GetCurrentState() const;
    
};

