#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZMatchmaking.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZMatchmaking : public UObject {
    GENERATED_BODY()
public:
    USBZMatchmaking();

};

