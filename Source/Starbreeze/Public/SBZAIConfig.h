#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EPD3ThreatLevel.h"
#include "SBZAIConfigDPSData.h"
#include "SBZAIConfigEvade.h"
#include "SBZAirPathConfig.h"
#include "SBZCoverShootingPoints.h"
#include "Templates/SubclassOf.h"
#include "SBZAIConfig.generated.h"

class USBZAIAction;
class USBZAIConfig;
class USBZAIOrder;

UCLASS(Blueprintable, DefaultConfig, Config=Starbreeze)
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
    float MeleeFireTimeAddition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreferredHidingRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlitchEffectRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurrenderGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoDownDistanceDelayRange;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval GoDownRandomDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortCircleSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAirPathConfig AirPathConfig;
    
private:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIConfigDPSData DPS[4];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<USBZAIAction>> ActionClasses;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<USBZAIOrder>> OrderClasses;
    
public:
    USBZAIConfig();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSBZCoverShootingPoints> GetShootingPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZAIConfig* Get();
    
};

