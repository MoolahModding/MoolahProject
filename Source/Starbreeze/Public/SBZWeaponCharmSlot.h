#pragma once
#include "CoreMinimal.h"
#include "SBZCosmeticsPartSlot.h"
#include "SBZModularSlotMeshContainer.h"
#include "SBZWeaponCharmSlot.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USBZWeaponCharmSlot : public USBZCosmeticsPartSlot, public ISBZModularSlotMeshContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnPriority;
    
public:
    USBZWeaponCharmSlot();


    // Fix for true pure virtual functions not being implemented
};

