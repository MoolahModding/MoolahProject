#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerCameraModifier.h"
#include "SBZAnimatedCameraModifier.generated.h"

UCLASS(Blueprintable)
class USBZAnimatedCameraModifier : public USBZPlayerCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraSocket;
    
public:
    USBZAnimatedCameraModifier();
};

