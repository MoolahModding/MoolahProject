#pragma once
#include "CoreMinimal.h"
#include "SBZHoldOutObjectiveBase.h"
#include "SBZHoldOutZoneOverlapObjective.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class USBZHoldOutZoneOverlapObjective : public USBZHoldOutObjectiveBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TriggerVolumeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumActorToOverlap;
    
public:
    USBZHoldOutZoneOverlapObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayersAliveCountChanged(const TArray<UObject*>& Players);
    
    UFUNCTION(BlueprintCallable)
    void OnFilteredActorEndOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors);
    
    UFUNCTION(BlueprintCallable)
    void OnFilteredActorBeginOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors);
    
};

