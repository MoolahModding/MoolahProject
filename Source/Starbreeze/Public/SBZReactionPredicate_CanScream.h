#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZReactionPredicate.h"
#include "SBZReactionPredicate_CanScream.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZReactionPredicate_CanScream : public USBZReactionPredicate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ScreamInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxScreamsPerInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlayerScreamDistance;
    
public:
    USBZReactionPredicate_CanScream();

};

