#pragma once
#include "CoreMinimal.h"
#include "SBZAIPointOfInterest.h"
#include "Templates/SubclassOf.h"
#include "SBZAIPointOfInterestReplicatedDebris.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class ASBZAIPointOfInterestReplicatedDebris : public ASBZAIPointOfInterest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Debris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnSpawnDebris, meta=(AllowPrivateAccess=true))
    bool bSpawnDebris;
    
public:
    ASBZAIPointOfInterestReplicatedDebris();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_OnSpawnDebris();
    
};

