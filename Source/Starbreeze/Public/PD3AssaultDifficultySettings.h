#pragma once
#include "CoreMinimal.h"
#include "PD3AssaulSustainPhaseSettings.h"
#include "PD3AssaultProgressionSettings.h"
#include "PD3AssaultWaitPhaseSettings.h"
#include "SBZSquadLimits.h"
#include "PD3AssaultDifficultySettings.generated.h"

class UClass;

USTRUCT(BlueprintType)
struct FPD3AssaultDifficultySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAliveAISpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMixing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPD3AssaultProgressionSettings> ProgressionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPD3AssaultWaitPhaseSettings> WaitPhaseDurationProgressionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPD3AssaulSustainPhaseSettings> SustainPhaseDurationProgressionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UClass>, FSBZSquadLimits> SquadLimits;
    
    STARBREEZE_API FPD3AssaultDifficultySettings();
};

