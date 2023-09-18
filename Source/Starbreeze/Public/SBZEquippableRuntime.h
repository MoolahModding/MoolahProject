#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableRuntime.generated.h"

class ASBZGadget;
class USBZEquippableGadgetData;
class USBZWeaponSightData;

USTRUCT(BlueprintType)
struct FSBZEquippableRuntime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZEquippableGadgetData*> GadgetDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZGadget*> GadgetActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponSightData*> SightArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSightIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZWeaponSightData* CurrentSightData;
    
    STARBREEZE_API FSBZEquippableRuntime();
};

