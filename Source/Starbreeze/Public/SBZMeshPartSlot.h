#pragma once
#include "CoreMinimal.h"
#include "SBZModularPartSlotBase.h"
#include "SBZModularSlotMeshContainer.h"
#include "SBZMeshPartSlot.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USBZMeshPartSlot : public USBZModularPartSlotBase, public ISBZModularSlotMeshContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnPriority;
    
public:
    USBZMeshPartSlot();
    
    // Fix for true pure virtual functions not being implemented
};

