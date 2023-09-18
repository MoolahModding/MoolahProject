#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZWeaponPatternAreaDefinition.h"
#include "SBZWeaponPatternAreaData.generated.h"

UCLASS(Blueprintable, Const, MinimalAPI)
class USBZWeaponPatternAreaData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponPatternAreaDefinition DefaultAreaDefinition;
    
    USBZWeaponPatternAreaData();

};

