#pragma once
#include "CoreMinimal.h"
#include "SBZCosmeticsDataAsset.h"
#include "SBZMaskConfig.h"
#include "SBZMaskPreconfigData.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZMaskPreconfigData : public USBZCosmeticsDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMaskConfig MaskConfig;
    
public:
    USBZMaskPreconfigData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZMaskConfig GetMaskConfig() const;
    
};

