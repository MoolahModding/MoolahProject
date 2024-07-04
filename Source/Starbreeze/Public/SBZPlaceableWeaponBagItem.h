#pragma once
#include "CoreMinimal.h"
#include "SBZBagItem.h"
#include "SBZEquippableConfig.h"
#include "SBZPlaceableWeaponBagItem.generated.h"

UCLASS(Blueprintable)
class ASBZPlaceableWeaponBagItem : public ASBZBagItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig StoredWeaponConfig;
    
public:
    ASBZPlaceableWeaponBagItem(const FObjectInitializer& ObjectInitializer);

};

