#pragma once
#include "CoreMinimal.h"
#include "SBZPlaceableCharges.h"
#include "SBZPlaceableSentry.generated.h"

class UClass;

UCLASS(Abstract, Blueprintable)
class ASBZPlaceableSentry : public ASBZPlaceableCharges {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SentryClassToSpawn;
    
public:
    ASBZPlaceableSentry(const FObjectInitializer& ObjectInitializer);

};

