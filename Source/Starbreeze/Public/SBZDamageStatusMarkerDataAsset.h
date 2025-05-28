#pragma once
#include "CoreMinimal.h"
#include "SBZMarkerDataAsset.h"
#include "SBZDamageStatusMarkerDataAsset.generated.h"

UCLASS(Blueprintable)
class USBZDamageStatusMarkerDataAsset : public USBZMarkerDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraDurationSeconds;
    
    USBZDamageStatusMarkerDataAsset();

};

