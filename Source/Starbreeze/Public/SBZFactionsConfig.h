#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZFactionAttitude.h"
#include "SBZFactionInfo.h"
#include "SBZFactionsConfig.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZFactionsConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZFactionInfo> Factions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZFactionAttitude> Attitudes;
    
    USBZFactionsConfig();

};

