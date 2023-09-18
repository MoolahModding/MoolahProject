#pragma once
#include "CoreMinimal.h"
#include "SBZEquippablePartConfig.h"
#include "SBZWeaponPatternDataConfig.generated.h"

class USBZSprayCanData;

UCLASS(Blueprintable)
class USBZWeaponPatternDataConfig : public USBZEquippablePartConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSprayCanData*> PatternSprayCans;
    
    USBZWeaponPatternDataConfig();

};

