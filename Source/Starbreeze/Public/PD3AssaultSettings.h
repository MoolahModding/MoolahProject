#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "PD3AssaultDifficultySettings.h"
#include "PD3AssaultPlatformSettings.h"
#include "PD3DramaSettings.h"
#include "PD3AssaultSettings.generated.h"

class UPD3SecuritySettingDataModifiers;

UCLASS(Blueprintable)
class UPD3AssaultSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckIntervalSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnticipationPhaseDurationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildPhaseDurationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFadePhaseDurationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAliveAISpawnCountTimeoutSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDramaAndEngagementTimeoutSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndFadePhaseMinDramaScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegroupPhaseDurationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndFadePhaseMinAliveAISpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTotalAISpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve MaxTotalAISpawnCountModifierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> MaxAliveAIPlayerModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve MaxAliveAIProgressionModifierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSpawnGroupQueryCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3AssaultPlatformSettings PlatformSettingsArray[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3AssaultDifficultySettings DifficultySettingsArray[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPD3DramaSettings DramaDifficultySettingsArray[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreferredSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreferredSpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnerTimeScoreWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnerDistScoreWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> TypeCooldowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TypesToIgnoreDuringFirstBuildup;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval VehicleCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumVehicleSpawnRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VehicleSpawnChance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval AttackingAiPerPlayer[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxNrAttackers[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPD3SecuritySettingDataModifiers* SecuritySettingDataModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> TypeLimits;
    
    UPD3AssaultSettings();

};

