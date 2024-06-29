#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "ESBZSpawnRequestStatus.h"
#include "SBZActorSpawnRequest.h"
#include "SBZActorSpawnRequestDoneDynamicDelegateDelegate.h"
#include "SBZActorSpawnRequestDynamicDelegateDelegate.h"
#include "SBZActorSpawnRequestHandle.h"
#include "SBZPawnSpawnDynamicDelegateDelegate.h"
#include "SBZPawnSpawnRequest.h"
#include "SBZPawnSpawnRequestDoneDynamicDelegateDelegate.h"
#include "SBZPawnSpawnRequestHandle.h"
#include "SBZSpawnRequestOptions.h"
#include "SBZSpawnManagerFunctionLibrary.generated.h"

class AActor;
class APawn;
class UObject;

UCLASS(Blueprintable)
class USBZSpawnManagerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZSpawnManagerFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitForPawnRequest(const UObject* WorldContextObject, FSBZPawnSpawnRequestHandle Handle, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WaitForActorRequest(const UObject* WorldContextObject, FSBZActorSpawnRequestHandle Handle, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSBZPawnSpawnRequestHandle RequestPawn(const UObject* WorldContextObject, const TArray<FSBZPawnSpawnRequest>& RequestArray, const FSBZPawnSpawnDynamicDelegate& Spawned, const FSBZPawnSpawnRequestDoneDynamicDelegate& RequestDone, FSBZSpawnRequestOptions Options, FName DebugName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSBZActorSpawnRequestHandle RequestActor(const UObject* WorldContextObject, const TArray<FSBZActorSpawnRequest>& RequestArray, FSBZSpawnRequestOptions Options, const FSBZActorSpawnRequestDynamicDelegate& Spawned, const FSBZActorSpawnRequestDoneDynamicDelegate& RequestDone, FName DebugName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESBZSpawnRequestStatus GetPawnRequestStatus(const FSBZPawnSpawnRequestHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPawnRequestCount(const FSBZPawnSpawnRequestHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSBZPawnSpawnRequest GetPawnRequest(const FSBZPawnSpawnRequestHandle& Handle, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<APawn*> GetCreatedPawns(const FSBZPawnSpawnRequestHandle& Handle, bool bIncludeMissingPawns);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<AActor*> GetCreatedActors(const FSBZActorSpawnRequestHandle& Handle, bool bRemoveMissingActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESBZSpawnRequestStatus GetActorRequestStatus(const FSBZActorSpawnRequestHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetActorRequestCount(const FSBZActorSpawnRequestHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSBZActorSpawnRequest GetActorRequest(const FSBZActorSpawnRequestHandle& Handle, int32 Index);
    
};

