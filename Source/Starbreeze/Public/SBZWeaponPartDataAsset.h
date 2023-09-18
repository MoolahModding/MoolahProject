#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZEquippablePartDataAsset.h"
#include "SBZModularMeshContainer.h"
#include "SBZModularMeshData.h"
#include "SBZWeaponPartDataAsset.generated.h"

class USBZModularPartSlotBase;

UCLASS(Blueprintable, MinimalAPI)
class USBZWeaponPartDataAsset : public USBZEquippablePartDataAsset, public ISBZModularMeshContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AddTagToWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZModularMeshData> ModularMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZModularPartSlotBase*> UseDefaultPartsFromSlotsAndBlock;
    
    USBZWeaponPartDataAsset();


    // Fix for true pure virtual functions not being implemented
};

