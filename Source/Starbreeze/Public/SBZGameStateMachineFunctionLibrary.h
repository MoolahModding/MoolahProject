#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESBZCurrentPlatform.h"
#include "ESBZGameStateMachineState.h"
#include "SBZGameStateMachineFunctionLibrary.generated.h"

class UObject;
class USBZGameStateMachine;

UCLASS(Blueprintable)
class STARBREEZE_API USBZGameStateMachineFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZGameStateMachineFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool IsValidPakchunkIndex(int32 PakchunkIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPie(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetLobbyTimeout(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TEnumAsByte<ESBZGameStateMachineState> GetGameStateMachineState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZGameStateMachine* GetGameStateMachine(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESBZCurrentPlatform GetCurrentPlatform();
    
    UFUNCTION(BlueprintCallable)
    static float GetChunkInstallProgress(int32 ChunkID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetAcceptMatchTimeout(UObject* WorldContextObject);
    
};

