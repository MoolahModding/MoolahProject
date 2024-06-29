#pragma once
#include "CoreMinimal.h"
#include "SBZHoldOutObjectiveBase.h"
#include "SBZHoldOutZoneOverlapDamageObjective.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class USBZHoldOutZoneOverlapDamageObjective : public USBZHoldOutObjectiveBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TriggerVolumeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Health;
    
public:
    USBZHoldOutZoneOverlapDamageObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFilteredActorEndOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors);
    
    UFUNCTION(BlueprintCallable)
    void OnFilteredActorBeginOverlapping(FName Identifier, AActor* Actor, int32 CurrentTotalActors);
    
};

