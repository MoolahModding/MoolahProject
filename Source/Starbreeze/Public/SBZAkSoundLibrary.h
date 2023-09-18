#pragma once
#include "CoreMinimal.h"
#include "ESBZAkPoolType.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZAkSoundLibrary.generated.h"

class UAkAudioEvent;
class UAkAuxBus;
class UAkComponent;
class USceneComponent;

UCLASS(Blueprintable)
class USBZAkSoundLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZAkSoundLibrary();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAkComponent* SpawnAkComponentAttached(UAkAudioEvent* AkEvent, UAkAuxBus* EarlyReflectionsBus, USceneComponent* AttachToComponent, ESBZAkPoolType PoolType, FName AttachPointName, bool AutoPost, const FString& EventName, const FString& EarlyReflectionsBusName, bool AutoDestroy);
    
};

