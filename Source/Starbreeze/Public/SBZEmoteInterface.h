#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZEmoteInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class USBZEmoteInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZEmoteInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void StartEmote(const FText& EmoteText) PURE_VIRTUAL(StartEmote,);
    
};

