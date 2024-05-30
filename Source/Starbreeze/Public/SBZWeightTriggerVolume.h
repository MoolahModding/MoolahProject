#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "SBZWeightTriggerDelegateDelegate.h"
#include "SBZWeightTriggerVolume.generated.h"

class ASBZCharacter;

UCLASS(Blueprintable)
class ASBZWeightTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeightTriggerDelegate OnWeightLimitChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeightLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASBZCharacter*, int32> CarryCountMap;
    
public:
    ASBZWeightTriggerVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetVolumeEnabled(bool bIsEnabled);
    
};

