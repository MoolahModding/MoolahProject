#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZParticleLibrary.generated.h"

class UObject;
class UParticleSystem;
class UParticleSystemComponent;
class UWorld;

UCLASS(Blueprintable)
class USBZParticleLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZParticleLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UParticleSystemComponent* SpawnPooledEmitterAtLocation(const UObject* WorldContextObject, UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale);
    
    UFUNCTION(BlueprintCallable)
    static UParticleSystemComponent* InternalSpawnPooledEmitterAtLocation(const UWorld* World, UParticleSystem* EmitterTemplate, FVector SpawnLocation, FRotator SpawnRotation, FVector SpawnScale);
    
};

