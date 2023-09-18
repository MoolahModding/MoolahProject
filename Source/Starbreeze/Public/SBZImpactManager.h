#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZTranslucentTimer.h"
#include "SBZImpactManager.generated.h"

class UAkComponent;
class UDecalComponent;
class UMaterialInterface;

UCLASS(Blueprintable)
class USBZImpactManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> ProjectileDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMaterialInterface*, UDecalComponent*> ProjectileInstancedDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> ThrowableProjectileDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<UMaterialInterface*, UDecalComponent*> ThrowableProjectileInstancedDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> MeleeDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> ExplosionDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> FootstepDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> SlidingDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> MantlingDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> StepUpDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> ObjectImpactDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> DebrisImpactDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> BagItemImpactDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> ThrowableDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> BloodSplatterDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* LastSlidingEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZTranslucentTimer> TranslucentPrimitiveComponenets;
    
public:
    USBZImpactManager();

private:
    UFUNCTION(BlueprintCallable)
    void HandleDroppedDecalComponent(UObject* DroppedElement);
    
};

