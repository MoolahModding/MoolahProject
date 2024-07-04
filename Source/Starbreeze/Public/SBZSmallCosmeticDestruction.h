#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SBZNoCookDS.h"
#include "SBZSmallCosmeticDestruction.generated.h"

class AActor;
class AController;
class UDamageType;
class UPhysicalMaterial;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASBZSmallCosmeticDestruction : public ASBZNoCookDS {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveToDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyWhenActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeActivatedByPlayerOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReceivesDamageFromMelee;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumImpactForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    ASBZSmallCosmeticDestruction(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivated();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleTakeRadialDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, const TArray<FHitResult>& HitInfos, const FRadialDamageParams& Params, const FVector& Origin, const UDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void HandleTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void HandleTakeOverlapDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, const TArray<FHitResult>& HitInfos, const FVector& OriginDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateImpactPoint(const FHitResult& Hit);
    
};

