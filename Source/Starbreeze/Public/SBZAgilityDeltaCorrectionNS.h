#pragma once
#include "CoreMinimal.h"
#include "ESBZAgilityPointType.h"
#include "ESBZAgilityWarpingDirection.h"
#include "SBZDeltaCorrectionNotifyState.h"
#include "SBZAgilityDeltaCorrectionNS.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STARBREEZE_API USBZAgilityDeltaCorrectionNS : public USBZDeltaCorrectionNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAgilityPointType TargetPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAgilityWarpingDirection WarpingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecomputeUsingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarpOnYZOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarpOnXZOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAgilityPointType TargetPointTypeToRecomputeFrom;
    
    USBZAgilityDeltaCorrectionNS();

};

