#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "SBZBasePlayerCameraManager.generated.h"

class UAkComponent;

UCLASS(Blueprintable, NonTransient)
class ASBZBasePlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkComponent*> DefaultListenerComponentArray;
    
    ASBZBasePlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

