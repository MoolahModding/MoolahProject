#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponModificationUIData.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponModificationUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    STARBREEZE_API FSBZWeaponModificationUIData();
};

