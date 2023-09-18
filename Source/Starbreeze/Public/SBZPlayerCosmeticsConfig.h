#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerCosmeticsConfig.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerCosmeticsConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaskConfigSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuitConfigSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GloveConfigSlotIndex;
    
    FSBZPlayerCosmeticsConfig();
};

