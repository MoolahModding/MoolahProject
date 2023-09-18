#pragma once
#include "CoreMinimal.h"
#include "SBZActorSpawnRequest.generated.h"

class ASBZActorSpawnBase;
class USBZActorSpawnRequestData;

USTRUCT(BlueprintType)
struct FSBZActorSpawnRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZActorSpawnRequestData* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASBZActorSpawnBase> Spawner;
    
    STARBREEZE_API FSBZActorSpawnRequest();
};

