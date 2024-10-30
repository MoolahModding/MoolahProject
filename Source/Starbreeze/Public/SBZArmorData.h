#pragma once
#include "CoreMinimal.h"
#include "ESBZArmorChunkType.h"
#include "SBZInventoryBaseData.h"
#include "Templates/SubclassOf.h"
#include "SBZArmorData.generated.h"

class UGameplayEffect;
class USBZLocalPlayerFeedback;

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
    FString ArmorDescriptionStatColorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USBZLocalPlayerFeedback> ArmorDamageFeedback;
    
public:
    USBZArmorData();

};

