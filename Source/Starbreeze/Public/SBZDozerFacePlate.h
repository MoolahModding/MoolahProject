#pragma once
#include "CoreMinimal.h"
#include "SBZDozerFaceArmor.h"
#include "SBZDozerFacePlate.generated.h"

class UPhysicalMaterial;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZDozerFacePlate : public USBZDozerFaceArmor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PoppedMaterial;
    
public:
    USBZDozerFacePlate();
};

