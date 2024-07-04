#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZWindApplier.generated.h"

class UActorComponent;

UCLASS(Abstract, Blueprintable)
class USBZWindApplier : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> Components;
    
public:
    USBZWindApplier();

};

