#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "PD3SpawnSquadPawn.generated.h"

class UPD3PawnVariation;

UCLASS(Blueprintable)
class UPD3SpawnSquadPawn : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPD3PawnVariation* PawnVariation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag CachedPawnType;
    
public:
    UPD3SpawnSquadPawn();

};

