#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBZPawnSpawnDefinition.h"
#include "SBZSpawnRotationHandlingMethod.h"
#include "SBZPawnSpawnBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZPawnSpawnBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeSpawnTransformStartingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSpawnRotationHandlingMethod RotationHandling;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPawnSpawnDefinition> SpawnDefinitionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NextSpawnDefinitionIndex;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WeightedLocation;
    
public:
    ASBZPawnSpawnBase(const FObjectInitializer& ObjectInitializer);

};

