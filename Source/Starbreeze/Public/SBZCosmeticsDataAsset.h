#pragma once
#include "CoreMinimal.h"
#include "ESBZRarity.h"
#include "SBZEquippablePartDataAsset.h"
#include "SBZCosmeticsDataAsset.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZCosmeticsDataAsset : public USBZEquippablePartDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZRarity Rarity;
    
public:
    USBZCosmeticsDataAsset();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConsumable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZRarity GetRarity() const;
    
};

