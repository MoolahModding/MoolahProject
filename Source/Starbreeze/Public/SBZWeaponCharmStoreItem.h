#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZWeaponCharmStoreItem.generated.h"

class USBZWeaponCharmData;

USTRUCT(BlueprintType)
struct FSBZWeaponCharmStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponCharmData* WeaponCharmData;
    
    STARBREEZE_API FSBZWeaponCharmStoreItem();
};

