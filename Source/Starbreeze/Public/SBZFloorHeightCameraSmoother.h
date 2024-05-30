#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZPlayerCameraModifier.h"
#include "SBZFloorHeightCameraSmoother.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZFloorHeightCameraSmoother : public USBZPlayerCameraModifier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval InterpSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval CharacterSpeed;
    
public:
    USBZFloorHeightCameraSmoother();

};

