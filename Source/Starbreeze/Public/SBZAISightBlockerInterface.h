#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "SBZAISightBlockerInterface.generated.h"

UINTERFACE(Blueprintable)
class STARBREEZE_API USBZAISightBlockerInterface : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API ISBZAISightBlockerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSightModifier(const FVector& Start, const FVector& End) const;
    
};

