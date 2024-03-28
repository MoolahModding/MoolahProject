#pragma once
#include "CoreMinimal.h"
#include "ESBZMuzzleSuppressor.h"
#include "SBZEquippablePartCustomData.h"
#include "SBZWeaponMuzzleData.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class USBZWeaponMuzzleData : public USBZEquippablePartCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZMuzzleSuppressor SuppressorStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> FireEmitterMesh;
    
    USBZWeaponMuzzleData();
};

