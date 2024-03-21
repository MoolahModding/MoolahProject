#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZWeaponDatabase.generated.h"

class USBZBaseWeaponData;

UCLASS(Blueprintable)
class USBZWeaponDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZBaseWeaponData*> Weapons;
    
    USBZWeaponDatabase();
};

