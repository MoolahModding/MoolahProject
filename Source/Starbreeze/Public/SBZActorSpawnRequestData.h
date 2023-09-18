#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZActorSpawnRequestData.generated.h"

class UClass;

UCLASS(Blueprintable)
class USBZActorSpawnRequestData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> ClassVariationArray;
    
    USBZActorSpawnRequestData();

};

