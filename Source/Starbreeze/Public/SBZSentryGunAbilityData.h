#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZSentryGunAbilityData.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZSentryGunAbilityData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> AbilityArray;
    
    USBZSentryGunAbilityData();

};

