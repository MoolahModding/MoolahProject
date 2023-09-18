#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZSpawnAttachData.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FSBZSpawnAttachData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
    STARBREEZE_API FSBZSpawnAttachData();
};

