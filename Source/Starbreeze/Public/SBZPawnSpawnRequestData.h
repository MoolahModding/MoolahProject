#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZPawnVariationData.h"
#include "SBZPawnSpawnRequestData.generated.h"

class UClass;

UCLASS(Blueprintable, Const)
class USBZPawnSpawnRequestData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> ClassVariationArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPawnVariationData> PawnVariationDatas;
    
    USBZPawnSpawnRequestData();

};

