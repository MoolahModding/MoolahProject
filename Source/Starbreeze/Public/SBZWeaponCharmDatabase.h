#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZWeaponCharmDatabase.generated.h"

class USBZWeaponCharmData;

UCLASS(Blueprintable)
class USBZWeaponCharmDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponCharmData*> WeaponCharmArray;
    
    USBZWeaponCharmDatabase();
};

