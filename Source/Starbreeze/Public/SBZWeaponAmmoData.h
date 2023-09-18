#pragma once
#include "CoreMinimal.h"
#include "SBZEquippablePartCustomData.h"
#include "SBZWeaponAmmoData.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class USBZWeaponAmmoData : public USBZEquippablePartCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> EmptyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> LoadedMesh;
    
    USBZWeaponAmmoData();

};

