#pragma once
#include "CoreMinimal.h"
#include "SBZStatisticCriteriaDataCollection.generated.h"

class USBZAssaultCountStatisticCriteriaData;
class USBZSentryKillsStatisticCriteriaData;
class USBZSmashAndGrabStatisticCriteriaData;
class USBZStatisticCriteriaData;
class USBZTaserPackStunsCriteriaData;

USTRUCT(BlueprintType)
struct FSBZStatisticCriteriaDataCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStatisticCriteriaData* PutOnMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStatisticCriteriaData* InsurancePolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStatisticCriteriaData* CrowdControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStatisticCriteriaData* UnlimitedPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZTaserPackStunsCriteriaData* TaserPackStuns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSmashAndGrabStatisticCriteriaData* SmashAndGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZSentryKillsStatisticCriteriaData* SentryKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAssaultCountStatisticCriteriaData* AfterParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStatisticCriteriaData* ColorMeSurprised;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStatisticCriteriaData* SpecOps;
    
    STARBREEZE_API FSBZStatisticCriteriaDataCollection();
};

