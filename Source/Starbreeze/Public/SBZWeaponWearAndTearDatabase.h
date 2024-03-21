#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZWeaponWearAndTearDatabase.generated.h"

class USBZWeaponWearAndTearData;

UCLASS(Blueprintable)
class USBZWeaponWearAndTearDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponWearAndTearData*> WeaponWearAndTearArray;
    
    USBZWeaponWearAndTearDatabase();
};

