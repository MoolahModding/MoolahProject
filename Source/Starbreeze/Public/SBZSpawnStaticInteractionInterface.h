#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "SBZSpawnStaticInteractionInterface.generated.h"

class AActor;
class USceneComponent;

UINTERFACE(Blueprintable)
class USBZSpawnStaticInteractionInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZSpawnStaticInteractionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PopulateSpawnInformationMap(TMap<USceneComponent*, FTransform>& InOutSpawnDataMap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActorSpawned(AActor* SpawnedActor, USceneComponent* AttachParent);
    
};

