#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZCapsuleShadowingSettings.h"
#include "SBZCapsuleShadowingData.generated.h"

UCLASS(Blueprintable)
class USBZCapsuleShadowingData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCapsuleShadowingSettings> CapsuleShadowingSettingsArray;
    
public:
    USBZCapsuleShadowingData();

};

