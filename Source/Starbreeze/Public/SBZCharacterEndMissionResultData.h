#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableEndMissionResultData.h"
#include "SBZCharacterEndMissionResultData.generated.h"

USTRUCT(BlueprintType)
struct FSBZCharacterEndMissionResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZEquippableEndMissionResultData> EquippableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BeenDefeatedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BeenRevivedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BeenKilledCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HaveKilledCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HaveSpecialKilledCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HaveCivilianKilledCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HaveGuardKilledCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HaveHeadshotKilledCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SecuredBagCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 InstantLootTakenCount;
    
    STARBREEZE_API FSBZCharacterEndMissionResultData();
};

