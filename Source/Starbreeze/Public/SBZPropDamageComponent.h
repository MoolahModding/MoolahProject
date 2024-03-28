#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SBZPropDamageHealthSignatureDelegate.h"
#include "SBZPropDamageHitsSignatureDelegate.h"
#include "SBZPropDamagePool.h"
#include "SBZPropDamageComponent.generated.h"

class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZPropDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPropDamageHitsSignature OnPropDamageHits;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPropDamageHealthSignature OnPropDamageHealth;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamagePools, meta=(AllowPrivateAccess=true))
    TArray<FSBZPropDamagePool> DamagePools;
    
public:
    USBZPropDamageComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_DamagePools();
    
public:
    UFUNCTION()
    void HandleTakeRadialDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, const TArray<FHitResult>& HitInfos, const FRadialDamageParams& Params, const FVector& Origin, const UDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION()
    void HandleTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
};

