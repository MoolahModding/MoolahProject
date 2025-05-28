#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZArmorChunkType.h"
#include "ESBZArmorSpeedPenalty.h"
#include "SBZInventoryBaseData.h"
#include "Templates/SubclassOf.h"
#include "SBZArmorData.generated.h"

class UGameplayEffect;
class USBZVariationSetData;

UCLASS(Blueprintable)
class USBZArmorData : public USBZInventoryBaseData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GameplayEffectArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZArmorChunkType> ChunkTypeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReplenishDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDownCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoadoutWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConsumableCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ToolCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoCapacityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstAidPackHealthPerCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoThrowableReplenishDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoThrowableReplenishCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepairArmorInteractionImmuneDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KillEnemyTraumaRestore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZArmorSpeedPenalty SpeedPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ArmorDescriptionStatColorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZVariationSetData> MeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PassiveDescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> CustomizeChunkRotationArray;
    
public:
    USBZArmorData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetToolCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZArmorSpeedPenalty GetSpeedPenalty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReplenishDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRepairArmorInteractionImmuneDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNoThrowableReplenishDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNoThrowableReplenishCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxDownCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLoadoutWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKillEnemyTraumaRestore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFormattedPassiveDescriptionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFirstAidPackHealthPerCharge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetConsumableCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ESBZArmorChunkType> GetChunkTypeArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmmoCapacityScale() const;
    
};

