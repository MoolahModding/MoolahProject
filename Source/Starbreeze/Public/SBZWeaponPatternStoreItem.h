#pragma once
#include "CoreMinimal.h"
#include "SBZStoreBaseItem.h"
#include "SBZWeaponPatternStoreItem.generated.h"

class USBZWeaponPatternData;

USTRUCT(BlueprintType)
struct FSBZWeaponPatternStoreItem : public FSBZStoreBaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPatternData* WeaponPatternData;
    
    STARBREEZE_API FSBZWeaponPatternStoreItem();
};

