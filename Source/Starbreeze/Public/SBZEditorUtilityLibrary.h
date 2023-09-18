#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZEditorUtilityLibrary.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZEditorUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZEditorUtilityLibrary();

    UFUNCTION(BlueprintCallable)
    static bool ResetToBlueprintDefault(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSbzLevelScriptActor(UWorld* World);
    
};

