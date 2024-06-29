#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "SBZSentryGunAbilityData.generated.h"

class USBZGameplayAbility;

UCLASS(Blueprintable)
class USBZSentryGunAbilityData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USBZGameplayAbility>> AbilityArray;
    
    USBZSentryGunAbilityData();

};

