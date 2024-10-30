#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZWeaponPartProgressionArray.h"
#include "SBZWeaponProgressionData.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZWeaponProgressionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponPartProgressionArray WeaponPartProgressionArray;
    
    USBZWeaponProgressionData();

};

