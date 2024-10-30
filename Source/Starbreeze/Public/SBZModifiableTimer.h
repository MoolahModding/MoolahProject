#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBZTimerState.h"
#include "SBZProgressionReachedDelegateDelegate.h"
#include "SBZTimedObjectiveInterface.h"
#include "SBZTimerDelegateDelegate.h"
#include "SBZModifiableTimer.generated.h"

class ASBZSabotagePoint;

UCLASS(Blueprintable)
class ASBZModifiableTimer : public AActor, public ISBZTimedObjectiveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTimerDelegate OnTimerDone;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTimerDelegate OnTimerStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZProgressionReachedDelegate OnProgressionReached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ProgressionValuesToPost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float CurrentSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TimerState, meta=(AllowPrivateAccess=true))
    ESBZTimerState CurrentTimerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZSabotagePoint* SabotagePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZSabotagePoint*> SabotagePointArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextProgressionToPostIndex;
    
public:
    ASBZModifiableTimer(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartTimer();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTimerSpeed(float NewSpeed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTimerDuration(float NewDuration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetTimer(bool bStartTimer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PauseTimer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSabotaged(bool bNewSabotagedState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_TimerState();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetTimerState(ESBZTimerState NewState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetTimerSpeed(float NewSpeed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetTimeElapsed(float NewTimeElapsed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetDuration(float NewDuration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ResetTimerAndStart();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ResetTimerAndPause();
    
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
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_TimerSpeedChanged(float NewSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_TimeElapsedChanged(float NewTimeElapsed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnStateChanged(ESBZTimerState NewState, ESBZTimerState OldState, bool bDoCosmetics);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_DurationChanged(float NewDuration);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddTimeElapsed(float TimeToAdd);
    

    // Fix for true pure virtual functions not being implemented
};

