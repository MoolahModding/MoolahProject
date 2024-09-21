#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZHoldOutDroneTagReactionSelectionConfig.generated.h"

USTRUCT(BlueprintType)
struct FSBZHoldOutDroneTagReactionSelectionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Range TagCountRange;
    
    STARBREEZE_API FSBZHoldOutDroneTagReactionSelectionConfig();
};

