#pragma once
#include "CoreMinimal.h"
#include "SBZBagHandle.h"
#include "SBZBagPersistentData.generated.h"

class AActor;
class ASBZPlayerCharacter;

USTRUCT(BlueprintType)
struct FSBZBagPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBagHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Secured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* LastClaimedByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ServerTimeAtFirstPickup;
    
    STARBREEZE_API FSBZBagPersistentData();
};

