#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZPawnSpawnDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSBZPawnSpawnDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameType;
    
    STARBREEZE_API FSBZPawnSpawnDefinition();
};

