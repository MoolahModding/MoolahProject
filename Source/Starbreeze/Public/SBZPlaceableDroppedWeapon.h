#pragma once
#include "CoreMinimal.h"
#include "SBZPlaceableWeapon.h"
#include "SBZPlaceableDroppedWeapon.generated.h"

class USBZSimplePhysicsCorrector;
class USceneComponent;

UCLASS(Blueprintable)
class ASBZPlaceableDroppedWeapon : public ASBZPlaceableWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBoundScaled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* WeaponPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSimplePhysicsCorrector* PhysicsCorrector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 AmmoLoadedLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 AmmoInventoryLeft;
    
public:
    ASBZPlaceableDroppedWeapon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

