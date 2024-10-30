#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "SBZHoldOutDroneSoundAndPriority.h"
#include "SBZHoldOutDroneSoundCollection.generated.h"

UCLASS(Blueprintable)
class USBZHoldOutDroneSoundCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSBZHoldOutDroneSoundAndPriority> Sounds;
    
    USBZHoldOutDroneSoundCollection();

};

