#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZWeaponPatternDatabase.generated.h"

class USBZWeaponPatternData;

UCLASS(Blueprintable)
class USBZWeaponPatternDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponPatternData*> WeaponPatternArray;
    
    USBZWeaponPatternDatabase();
};

