#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "SBZLevelLibrary.generated.h"

class AActor;
class ULevel;

UCLASS(Blueprintable)
class USBZLevelLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZLevelLibrary();

    UFUNCTION(BlueprintCallable)
    static ULevel* GetLevel(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllActorsOfClassInLevel(ULevel* Level, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);
    
};

