#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZLifeActionAffinityList.h"
#include "SBZLifeActionAffinitytData.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZLifeActionAffinitytData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLifeActionAffinityList AllowedActions;
    
    USBZLifeActionAffinitytData();

};

