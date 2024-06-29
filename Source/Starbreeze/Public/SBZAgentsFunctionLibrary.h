#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZAgentsFunctionLibrary.generated.h"

class ASBZCharacter;

UCLASS(Blueprintable)
class USBZAgentsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZAgentsFunctionLibrary();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SetCrouched(ASBZCharacter* SBZCharacter, bool bCrouched);
    
};

