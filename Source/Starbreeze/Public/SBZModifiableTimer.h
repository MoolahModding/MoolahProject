#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZProgressionReachedDelegateDelegate.h"
#include "SBZTimedObjectiveInterface.h"
#include "SBZTimerDelegateDelegate.h"
#include "SBZModifiableTimer.generated.h"

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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsRunning, meta=(AllowPrivateAccess=true))
    bool bIsRunning;
    
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
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsRunning();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartTimer();
    
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
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PauseTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRemaining() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddTimeElapsed(float TimeToAdd);
    

    // Fix for true pure virtual functions not being implemented
};

