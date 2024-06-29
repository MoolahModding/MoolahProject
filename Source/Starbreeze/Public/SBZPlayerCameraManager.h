#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SBZBasePlayerCameraManager.h"
#include "SBZCameraViewRestriction.h"
#include "SBZLockCameraData.h"
#include "SBZPlayerCameraManager.generated.h"

class AActor;
class UNiagaraComponent;
class UNiagaraSystem;
class USBZAudioRaycasting;
class USBZClampCameraRotationModifier;
class USBZPlayerCameraFeedbackComponent;
class USBZPlayerCameraModifier;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZPlayerCameraManager : public ASBZBasePlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPlayerCameraFeedbackComponent* PlayerCameraFeedbackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DepthOfFieldFstop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DepthOfFieldFocalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DepthOfFieldDepthBlurAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DepthOfFieldDepthBlurRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float TopPassDepthOfFieldFstop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float TopPassDepthOfFieldFocalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float TopPassDepthOfFieldDepthBlurAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float TopPassDepthOfFieldDepthBlurRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MotionBlurAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MotionBlurMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MotionBlurTargetFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MotionBlurPerObjectSize;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZPlayerCameraModifier*> SBZCameraModifierList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZClampCameraRotationModifier* ClampCameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LensEffectParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZCameraViewRestriction> ActiveCameraViewRestrictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveCameraViewRestrictionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult ForwardTraceResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardTraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDynFocalDistanceWhenUnequipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAudioRaycasting* AudioRaycasting;
    
public:
    ASBZPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockCamera(int32& InOutId);
    
    UFUNCTION(BlueprintCallable)
    UNiagaraComponent* SpawnLensParticleEffect(UNiagaraSystem* ParticleSystem, float LifeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraLockedReferenceRotation(const FRotator& InLockedRotation);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCameraViewRestriction(FSBZCameraViewRestriction& RestrictionSettings);
    
    UFUNCTION(BlueprintCallable)
    int32 LockCamera(const FSBZLockCameraData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraLocked() const;
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateCameraViewRestriction(FSBZCameraViewRestriction& RestrictionSettings);
    
};

