#pragma once
#include "CoreMinimal.h"
#include "ESBZSuitPart.h"
#include "SBZModularPartConfig.h"
#include "SBZSuitPartConfig.generated.h"

UCLASS(Blueprintable)
class USBZSuitPartConfig : public USBZModularPartConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSuitPart SuitPart;
    
    USBZSuitPartConfig();

};

