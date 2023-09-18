#pragma once
#include "CoreMinimal.h"
#include "SBZCosmeticProp.h"
#include "SBZRappellingRope.generated.h"

class USBZRappellingRopeComponent;
class USBZRappellingRopeData;

UCLASS(Blueprintable)
class ASBZRappellingRope : public ASBZCosmeticProp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZRappellingRopeComponent* RappellingRopeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZRappellingRopeData* RappellingRopeData;
    
public:
    ASBZRappellingRope(const FObjectInitializer& ObjectInitializer);

};

