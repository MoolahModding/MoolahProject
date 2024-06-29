#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "SBZActorSpawnRequestData.generated.h"

class AActor;

UCLASS(Blueprintable)
class USBZActorSpawnRequestData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ClassVariationArray;
    
    USBZActorSpawnRequestData();

};

