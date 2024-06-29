#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZTargetFinder.generated.h"

class USBZTargetFinderPredicate;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USBZTargetFinder : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZTargetFinderPredicate*> Predicates;
    
public:
    USBZTargetFinder();

};

