#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZPlayerLibrary.generated.h"

class AActor;
class APawn;
class APlayerController;
class APlayerState;
class ASBZPlayerCharacter;
class UObject;

UCLASS(Blueprintable)
class USBZPlayerLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZPlayerLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerInRange(const UObject* WorldContextObject, const FVector& Location, float Range);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZPlayerCharacter* GetRandomPlayerCharacterFromStream(const UObject* WorldContextObject, const FRandomStream& Stream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZPlayerCharacter* GetRandomPlayerCharacter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumConnectedPlayers(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumAlivePlayers(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerState* GetLocalPlayerState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APawn* GetLocalPlayerPawn(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetLocalPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetClosestPlayerToLocation(const UObject* WorldContextObject, const FVector& Location, ASBZPlayerCharacter*& PlayerCharacter, float& Distance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetClosestPlayerToActor(const UObject* WorldContextObject, const AActor* Actor, ASBZPlayerCharacter*& PlayerCharacter, float& Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<ASBZPlayerCharacter*> GetAllSBZPlayerCharacters(const UObject* WorldContextObject);
    
};

