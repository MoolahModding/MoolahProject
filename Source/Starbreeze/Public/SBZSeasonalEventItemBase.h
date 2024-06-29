#pragma once
#include "CoreMinimal.h"
#include "SBZEffectChanceData.h"
#include "SBZPowerUp.h"
#include "SBZSeasonalEventItemBase.generated.h"

UCLASS(Blueprintable)
class ASBZSeasonalEventItemBase : public ASBZPowerUp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZEffectChanceData> EffectChanceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthGained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArmorChunksToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumberOfMagazines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumberOfGrenades;
    
public:
    ASBZSeasonalEventItemBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnItemPickedUp(bool bIsPositiveEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnItemPickedUp(bool bIsPositiveEffect);
    
};

