#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZWeaponStickerDatabase.generated.h"

class USBZWeaponStickerData;

UCLASS(Blueprintable)
class USBZWeaponStickerDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponStickerData*> WeaponStickerArray;
    
    USBZWeaponStickerDatabase();

};

