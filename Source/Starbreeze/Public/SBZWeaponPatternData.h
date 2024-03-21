#pragma once
#include "CoreMinimal.h"
#include "SBZCosmeticsDataAsset.h"
#include "SBZWeaponPatternDataSingleColorAreaList.h"
#include "SBZWeaponPatternData.generated.h"

UCLASS(Blueprintable)
class USBZWeaponPatternData : public USBZCosmeticsDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponPatternDataSingleColorAreaList> AreasForEachColor;
    
    USBZWeaponPatternData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNbExpectedColorsInConfig() const;
    
};

