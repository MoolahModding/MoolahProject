#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZMainMenuCameraManager.generated.h"

class ACameraActor;
class ASBZMainMenuCameraManager;
class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZMainMenuCameraManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ACameraActor*> Cameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LobbyCameraName;
    
    ASBZMainMenuCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchToDefaultCamera();
    
    UFUNCTION(BlueprintCallable)
    void SwitchToCamera(const FName& CameraName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASBZMainMenuCameraManager* GetMainMenuCameraManager(const UObject* WorldContextObject);
    
};

