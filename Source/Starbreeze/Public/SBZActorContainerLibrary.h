#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZActorContainerLibrary.generated.h"

class AActor;
class USBZActorContainer;

UCLASS(Blueprintable)
class USBZActorContainerLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZActorContainerLibrary();

    UFUNCTION(BlueprintCallable)
    static AActor* FindNearestActorFromContainer(const USBZActorContainer* Container, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> FindNearbyActorsFromContainer(USBZActorContainer* Container, const FVector& Position, float Distance);
    
};

