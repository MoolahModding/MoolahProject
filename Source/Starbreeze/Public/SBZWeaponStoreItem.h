#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZWeaponStoreItem.generated.h"

class USBZBaseWeaponData;

USTRUCT(BlueprintType)
struct FSBZWeaponStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBaseWeaponData* WeaponData;
    
    STARBREEZE_API FSBZWeaponStoreItem();
};

