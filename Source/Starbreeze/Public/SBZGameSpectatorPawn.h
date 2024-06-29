#pragma once
#include "CoreMinimal.h"
#include "SBZSpectateCameraSettings.h"
#include "SBZSpectateTargetChangedDelegateDelegate.h"
#include "SBZSpectatorPawn.h"
#include "SBZGameSpectatorPawn.generated.h"

class AActor;
class UCameraComponent;
class USBZSpringArmComponent;

UCLASS(Blueprintable)
class ASBZGameSpectatorPawn : public ASBZSpectatorPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* SpectateCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSpectateCameraSettings CameraDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSpectateCameraSettings CameraDefeatedTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSpectateTargetChangedDelegate OnSpectateTargetChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadTargetDelay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SpectateTarget;
    
public:
    ASBZGameSpectatorPawn(const FObjectInitializer& ObjectInitializer);

};

