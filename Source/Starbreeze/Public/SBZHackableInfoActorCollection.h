#pragma once
#include "CoreMinimal.h"
#include "SBZHackableInfoActorCollection.generated.h"

class ASBZHackableInfoActor;

USTRUCT(BlueprintType)
struct FSBZHackableInfoActorCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZHackableInfoActor*> Array;
    
    STARBREEZE_API FSBZHackableInfoActorCollection();
};

