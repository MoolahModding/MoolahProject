#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZUIWeaponStatWeightContainer.h"
#include "SBZUIWeaponStatsAsset.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZUIWeaponStatsAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* WeaponStatsBlueprintClass;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZUIWeaponStatWeightContainer StatWeightContainerArray[6];
    
public:
    USBZUIWeaponStatsAsset();

};

