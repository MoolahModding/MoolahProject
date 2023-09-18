#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponAttribute.h"
#include "SBZWeaponAttributIdentifier.h"
#include "SBZWeaponModificationData.generated.h"

class USBZUIWeaponStatsAsset;

USTRUCT(BlueprintType)
struct FSBZWeaponModificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZUIWeaponStatsAsset> WeaponStatsAssetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SuppressorDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MagazineDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZWeaponAttribute, FSBZWeaponAttributIdentifier> AttributeIdentifierMap;
    
    STARBREEZE_API FSBZWeaponModificationData();
};

