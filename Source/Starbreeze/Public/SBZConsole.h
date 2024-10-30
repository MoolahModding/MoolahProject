#pragma once
#include "CoreMinimal.h"
#include "Engine/Console.h"
#include "SBZConsole.generated.h"

UCLASS(Blueprintable, NonTransient, Config=SBZConsole)
class USBZConsole : public UConsole {
    GENERATED_BODY()
public:
    USBZConsole();

};

