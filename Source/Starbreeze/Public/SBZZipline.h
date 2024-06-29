#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ESBZZiplineType.h"
#include "SBZZipline.generated.h"

class ASBZLongNavLink;
class UBoxComponent;
class UPrimitiveComponent;
class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;
class USplineComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASBZZipline : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavLinkStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavLinkEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapNavLinkEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapNavLinkStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZZiplineType ZiplineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* OverlapBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StartPointMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* EndPointMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZLongNavLink* NavLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartDropoffVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndDropoffVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDistanceSolverIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitLaunchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabledAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ZiplineEnabled, meta=(AllowPrivateAccess=true))
    bool bZiplineEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromEndToStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfExtentSizeToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartForcedDirectionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndForcedDirectionThreshold;
    
public:
    ASBZZipline(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetZiplineEnabled(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnZiplineEnabledCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnZiplineBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ZiplineEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnNavLinkReached(AActor* MovingActor, const FVector& DestinationPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ZiplineEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnZiplineEnabledChanged(bool bEnabled, bool bDoCosmetics);
    
};

