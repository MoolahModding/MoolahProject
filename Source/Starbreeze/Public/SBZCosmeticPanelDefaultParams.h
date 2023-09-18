#pragma once
#include "CoreMinimal.h"
#include "SBZCosmeticPanelDefaultParams.generated.h"

USTRUCT(BlueprintType)
struct FSBZCosmeticPanelDefaultParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    STARBREEZE_API FSBZCosmeticPanelDefaultParams();
};

