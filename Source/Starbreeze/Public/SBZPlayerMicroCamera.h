#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/NetSerialization.h"
#include "SBZCameraViewInterface.h"
#include "SBZPlayerMicroCamera.generated.h"

class ASBZPlayerCharacter;
class USBZToolSkeletalMeshComponent;

UCLASS(Blueprintable)
class ASBZPlayerMicroCamera : public AActor, public ISBZCameraViewInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZToolSkeletalMeshComponent* SkeletalMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CameraTargetRotation, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal ReplicatedCameraTargetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CameraCurrentRotation, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal ReplicatedCameraCurrentRotation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval YawLimit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval PitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* InstigatorCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ViewTargetPlayerStateIdArray, meta=(AllowPrivateAccess=true))
    TArray<int32> ViewTargetPlayerStateIdArray;
    
public:
    ASBZPlayerMicroCamera();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_ViewTargetPlayerStateIdArray(const TArray<int32>& OldViewTargetPlayerStateIdArray);
    
    UFUNCTION()
    void OnRep_CameraTargetRotation();
    
    UFUNCTION()
    void OnRep_CameraCurrentRotation();
    
    UFUNCTION()
    void OnPlayerStateReplicated();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_EndViewTarget(int32 PlayerId);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_BecomeViewTarget(int32 PlayerId);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnViewTargetChanged(bool bIsViewTarget);
    
    
    // Fix for true pure virtual functions not being implemented
};

