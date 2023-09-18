#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PD3SpawnSquad.generated.h"

class UPD3SpawnSquadPawn;

USTRUCT(BlueprintType)
struct FPD3SpawnSquad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPD3SpawnSquadPawn*> PawnArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CachedPawnTypes;
    
public:
    STARBREEZE_API FPD3SpawnSquad();
};

