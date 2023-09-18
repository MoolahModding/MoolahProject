#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EPD3ThreatLevel.h"
#include "SBZAIConfigDPSData.h"
#include "SBZAIConfigEvade.h"
#include "SBZCoverShootingPoints.h"
#include "SBZAIConfig.generated.h"

class UClass;
class USBZAIConfig;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZAIConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTimeSliceDecidersLoop;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double DecidersLoopTimeSlicingBudget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeployableCooldown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeployableIgnoreTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeployableConsumedTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, EPD3ThreatLevel> Threats;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIConfigEvade Evade;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCoverShootingPoints ShootingPoints[7];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FriendlyFireRadius;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval CrewAIStealthMarkingCooldown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthMarkingRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowHealthConsideration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowArmorConsideration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowAmmoConsideration;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDeployablesAllowed[4];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TauntTimeFiredThreshold[4];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurrenderGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoDownDistanceDelayRange;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval GoDownRandomDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortCircleSize;
    
private:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIConfigDPSData DPS[4];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UClass*> ActionClasses;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UClass*> OrderClasses;
    
public:
    USBZAIConfig();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZCoverShootingPoints> GetShootingPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZAIConfig* Get();
    
};

