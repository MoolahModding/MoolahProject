#pragma once
#include "CoreMinimal.h"
#include "SBZAcousticPortalConnectedActors.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZAcousticPortalConnectedActors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> Array;
    
    STARBREEZE_API FSBZAcousticPortalConnectedActors();
};

