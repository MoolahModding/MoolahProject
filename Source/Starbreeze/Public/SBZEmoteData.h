#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZEmoteMapping.h"
#include "SBZEmoteData.generated.h"

UCLASS(Blueprintable)
class USBZEmoteData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZEmoteMapping> EmoteMappings;
    
public:
    USBZEmoteData();

};

