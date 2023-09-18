#pragma once
#include "CoreMinimal.h"
#include "SBZLocationInformation.h"
#include "SBZSpawnLocation.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZSpawnLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLocationInformation LocationInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PossibleSpawningActors;
    
    STARBREEZE_API FSBZSpawnLocation();
};

