#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=JsonUtilities -ObjectName=SBZJSonSerializeVariablesInterface -FallbackName=SBZJSonSerializeVariablesInterface
#include "SBZJSonSerializeVariablesInterface.h"
#include "SBZEquippablePartConfig.h"
#include "SBZWeaponPatternDataConfig.generated.h"

class USBZSprayCanData;

UCLASS(Blueprintable)
class USBZWeaponPatternDataConfig : public USBZEquippablePartConfig, public ISBZJSonSerializeVariablesInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSprayCanData*> PatternSprayCans;
    
    USBZWeaponPatternDataConfig();


    // Fix for true pure virtual functions not being implemented
};

