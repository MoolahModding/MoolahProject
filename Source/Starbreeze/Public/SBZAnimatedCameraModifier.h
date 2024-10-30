#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerCameraModifier.h"
#include "SBZAnimatedCameraModifier.generated.h"

class ASBZPlayerCharacter;

UCLASS(Blueprintable)
class USBZAnimatedCameraModifier : public USBZPlayerCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* PlayerCharacter;
    
public:
    USBZAnimatedCameraModifier();

};

