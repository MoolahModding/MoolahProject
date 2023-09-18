#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZToolSnapData.generated.h"

UCLASS(Blueprintable)
class USBZToolSnapData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZAxisOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToolSnapOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToolSnapRadius;
    
    USBZToolSnapData();

};

