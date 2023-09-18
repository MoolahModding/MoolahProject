#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZCharacterMovementSetting.h"
#include "SBZCharacterMovementSettings.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZCharacterMovementSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCharacterMovementSetting DefaultSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCharacterMovementSetting> Settings;
    
public:
    USBZCharacterMovementSettings();

};

