#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponModificationUIData.h"
#include "SBZEquippablePartUIData.generated.h"

USTRUCT(BlueprintType)
struct FSBZEquippablePartUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponModificationUIData> PositiveModifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponModificationUIData> NegativeModifications;
    
    STARBREEZE_API FSBZEquippablePartUIData();
};

