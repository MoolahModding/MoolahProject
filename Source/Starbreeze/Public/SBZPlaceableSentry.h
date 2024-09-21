#pragma once
#include "CoreMinimal.h"
#include "SBZPlaceableCharges.h"
#include "Templates/SubclassOf.h"
#include "SBZPlaceableSentry.generated.h"

class ASBZSentryGun;

UCLASS(Abstract, Blueprintable)
class ASBZPlaceableSentry : public ASBZPlaceableCharges {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZSentryGun> SentryClassToSpawn;
    
public:
    ASBZPlaceableSentry(const FObjectInitializer& ObjectInitializer);

};

