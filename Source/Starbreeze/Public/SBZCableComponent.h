#pragma once
#include "CoreMinimal.h"
#include "CableComponent.h"
#include "UObject/NoExportTypes.h"
#include "SBZCableCollisionPlane.h"
#include "SBZCablePointAttachment.h"
#include "SBZCableComponent.generated.h"

class AWindDirectionalSource;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZCableComponent : public UCableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWindDirectionalSource* WindSource;
    
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
    
    USBZCableComponent();

    UFUNCTION(BlueprintCallable)
    void UpdateSegmentCount(const float InCableLength, const float SegmentLength, const int32 MaxSegmentCount);
    
    UFUNCTION(BlueprintCallable)
    void ResetCollisionPlanes();
    
    UFUNCTION(BlueprintCallable)
    void ResetCable();
    
    UFUNCTION(BlueprintCallable)
    void ResetAttachPoints();
    
    UFUNCTION(BlueprintCallable)
    void AddDisplacementForce(FVector DisplacementForceLocation, float DisplacementForce, float DisplacementForceRadius);
    
    UFUNCTION(BlueprintCallable)
    void AddCollisionPlane(const FSBZCableCollisionPlane& CollisionPlane);
    
};

