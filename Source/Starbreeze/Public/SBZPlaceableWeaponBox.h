#pragma once
#include "CoreMinimal.h"
#include "SBZPlaceableWeapon.h"
#include "SBZPlaceableWeaponBox.generated.h"

class USBZBaseInteractableComponent;

UCLASS(Abstract, Blueprintable)
class ASBZPlaceableWeaponBox : public ASBZPlaceableWeapon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
public:
    ASBZPlaceableWeaponBox();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetActiveState(bool bActive);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInteractionEnabledStateChange(const USBZBaseInteractableComponent* InteractableComponent, bool bInNewState);
    
};

