#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZKilledPawnDynamicDelegateDelegate.h"
#include "SBZPawnPlatformSpawnSettings.h"
#include "SBZSpawnManager.generated.h"

class APawn;
class USBZSpawnManager;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class USBZSpawnManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZKilledPawnDynamicDelegate KilledPawnDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPawnPlatformSpawnSettings PawnPlatformSpawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<APawn*> SpawnedPawnSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> PendingDestroyedPawnArray;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    // Missed Property: KilledPawnDelegateMap
    // FunctionSignature is nullptr, cannot deduce function for 'MulticastInlineDelegateProperty KilledPawnDelegateMap./Script/Starbreeze.SBZSpawnManager:KilledPawnDelegateMap'

    
public:
    USBZSpawnManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnPawnLifetimeChanged(APawn* Pawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZSpawnManager* Get(const UObject* WorldContextObject);
    
};

