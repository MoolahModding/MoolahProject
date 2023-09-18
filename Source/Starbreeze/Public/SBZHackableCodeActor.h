#pragma once
#include "CoreMinimal.h"
#include "ESBZHackableActorState.h"
#include "SBZHackableActor.h"
#include "SBZHackableCodeActor.generated.h"

UCLASS(Blueprintable)
class ASBZHackableCodeActor : public ASBZHackableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<int32> Codes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfCodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CustomCodeProcessText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldResetOnHeistStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationSecondsAfterReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZHackableActorState StateToResetTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldKeepCustomMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldResetToGenericHack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsResetToGenericHack;
    
public:
    ASBZHackableCodeActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetHackableActorToGenericHack(const float InDuration, bool bKeepCustomMessage, ESBZHackableActorState ResetState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHeistGoneLoud();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ResetHackableActorToGenericHack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCodeHackingDone();
    
};

