#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VirtualCursorFunctionLibrary.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class GAMEPADUMGPLUGIN_API UVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVirtualCursorFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static bool IsUsingAnalogCursor();
    
    UFUNCTION(BlueprintPure)
    static bool IsMoving();
    
    UFUNCTION(BlueprintPure)
    static bool IsEnabled();
    
    UFUNCTION(BlueprintPure)
    static bool IsCursorOverInteractableWidget();
    
    UFUNCTION(BlueprintCallable)
    static void EnableVirtualCursor(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void DisableVirtualCursor(APlayerController* PC);
    
};

