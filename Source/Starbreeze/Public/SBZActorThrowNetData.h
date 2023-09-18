#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZActorThrowNetData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZActorThrowNetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorToThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ThrowForce;
    
    STARBREEZE_API FSBZActorThrowNetData();
};

