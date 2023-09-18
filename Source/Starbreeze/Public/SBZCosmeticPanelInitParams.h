#pragma once
#include "CoreMinimal.h"
#include "SBZCosmeticPanelDefaultParams.h"
#include "SBZCosmeticsInventoryItem.h"
#include "SBZCosmeticPanelInitParams.generated.h"

USTRUCT(BlueprintType)
struct FSBZCosmeticPanelInitParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCosmeticPanelDefaultParams DefaultItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCosmeticsInventoryItem> CosmeticInventoryItems;
    
    STARBREEZE_API FSBZCosmeticPanelInitParams();
};

