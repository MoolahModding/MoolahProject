#pragma once
#include "CoreMinimal.h"
#include "AkAcousticTextureSetComponent.h"
#include "AkSurfacePoly.h"
#include "AkSurfaceReflectorSetComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSurfaceReflectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAkSurfacePoly> AcousticPolys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDiffraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDiffractionOnBoundaryEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AssociatedRoom;
    
    UAkSurfaceReflectorSetComponent();

    UFUNCTION(BlueprintCallable)
    void UpdateSurfaceReflectorSet();
    
    UFUNCTION(BlueprintCallable)
    void SendSurfaceReflectorSet();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSurfaceReflectorSet();
    
};

