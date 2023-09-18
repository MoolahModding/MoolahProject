#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponPatternDataSingleColorAreaList.generated.h"

class USBZWeaponPatternAreaData;

USTRUCT(BlueprintType)
struct FSBZWeaponPatternDataSingleColorAreaList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponPatternAreaData*> AreaList;
    
    STARBREEZE_API FSBZWeaponPatternDataSingleColorAreaList();
};

