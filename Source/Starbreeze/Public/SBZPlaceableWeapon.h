#pragma once
#include "CoreMinimal.h"
#include "SBZEquippableConfig.h"
#include "SBZPlaceableBase.h"
#include "SBZPlaceableWeapon.generated.h"

class USBZBaseInteractableComponent;
class USBZInteractorComponent;
class USBZMarkerDataAsset;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ASBZPlaceableWeapon : public ASBZPlaceableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig StoredWeaponConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* WeaponMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOnInteraction;
    
public:
    ASBZPlaceableWeapon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
};

