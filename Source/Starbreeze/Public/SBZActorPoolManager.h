#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "SBZActorPool.h"
#include "SBZActorPoolManager.generated.h"

class AActor;
class UClass;
class UObject;
class USBZActorPoolManager;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZActorPoolManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FSBZActorPool> Pools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FTimerHandle> ReturnActorTimerHandles;
    
public:
    USBZActorPoolManager();

    UFUNCTION(BlueprintCallable)
    void ReturnActor(AActor* Actor, float Delay);
    
    UFUNCTION(BlueprintCallable)
    void OnExitedActionPhase();
    
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void InitPool(UWorld* World, UClass* ActorClass, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetActor(UWorld* World, UClass* ActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZActorPoolManager* Get(const UObject* WorldContextObject);
    
};

