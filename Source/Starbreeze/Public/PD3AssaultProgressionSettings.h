#pragma once
#include "CoreMinimal.h"
#include "PD3SpawnSquad.h"
#include "PD3AssaultProgressionSettings.generated.h"

USTRUCT(BlueprintType)
struct FPD3AssaultProgressionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAtProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPD3SpawnSquad> SquadArray;
    
    STARBREEZE_API FPD3AssaultProgressionSettings();
};

