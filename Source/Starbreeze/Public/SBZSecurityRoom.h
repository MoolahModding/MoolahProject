#pragma once
#include "CoreMinimal.h"
#include "SBZPawnSpawnPredefined.h"
#include "SBZViewTargetCollectionInterface.h"
#include "SBZSecurityRoom.generated.h"

class AActor;
class ASBZSecurityCamera;
class USBZDialogDataAsset;
class UWorld;

UCLASS(Blueprintable)
class ASBZSecurityRoom : public ASBZPawnSpawnPredefined, public ISBZViewTargetCollectionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* ShadeCameraDownVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* ShadeCameraUpVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZSecurityCamera*> SecurityCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPawnSpawnPredefined* GuardRoomSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FocusActor;
    
public:
    ASBZSecurityRoom(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayableLevelInitialized(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraDestroyed(AActor* DestroyedActor);
    

    // Fix for true pure virtual functions not being implemented
};

