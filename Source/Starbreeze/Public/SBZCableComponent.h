#pragma once
#include "CoreMinimal.h"
#include "CableComponent.h"
#include "UObject/NoExportTypes.h"
#include "SBZCableCollisionPlane.h"
#include "SBZCablePointAttachment.h"
#include "SBZWindData.h"
#include "SBZCableComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZCableComponent : public UCableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectedByWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindGustFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCablePointAttachment StartCablePointAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCablePointAttachment> CablePointAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCollisionPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCableCollisionPlane> CollisionPlanes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoComputeCableLength;
    
    USBZCableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSegmentCount(const float InCableLength, const float SegmentLength, const int32 MaxSegmentCount);
    
    UFUNCTION(BlueprintCallable)
    void SetWindData(const FSBZWindData& WindData);
    
    UFUNCTION(BlueprintCallable)
    void SetStartAttachmentPointRewindSpeed(float WindingSpeed);
    
    UFUNCTION(BlueprintCallable)
    void ResetCollisionPlanes();
    
    UFUNCTION(BlueprintCallable)
    void ResetCable();
    
    UFUNCTION(BlueprintCallable)
    void ResetAttachPoints();
    
    UFUNCTION(BlueprintCallable)
    void DeleteAttachmentPoint(const USceneComponent* Component, const FName& SocketName);
    
    UFUNCTION(BlueprintCallable)
    void AddDisplacementForce(FVector DisplacementForceLocation, float DisplacementForce, float DisplacementForceRadius);
    
    UFUNCTION(BlueprintCallable)
    void AddCollisionPlane(const FSBZCableCollisionPlane& CollisionPlane);
    
    UFUNCTION(BlueprintCallable)
    void AddAttachmentPoint(UPARAM(Ref) FSBZCablePointAttachment& CablePointAttachment);
    
};

