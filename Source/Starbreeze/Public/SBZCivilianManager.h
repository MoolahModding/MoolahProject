#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPD3HeistState.h"
#include "SBZCivilianManager.generated.h"

class APD3PawnSpawnGroup;
class APawn;
class ASBZAIController;
class USBZCivilianManager;
class USBZCivilianManagerSettings;
class USBZSpawnManager;

UCLASS(Blueprintable, Within=PD3HeistGameMode)
class USBZCivilianManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCivilianManagerSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APD3PawnSpawnGroup*> SpawnGroupArray;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASBZAIController>> StayingCivilians;
    
public:
    USBZCivilianManager();

protected:
    UFUNCTION(BlueprintCallable)
    void StopStaying();
    
    UFUNCTION(BlueprintCallable)
    void OnPawnSpawned(USBZSpawnManager* SpawnManager, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnKilled(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnHeistStateChanged(EPD3HeistState OldState, EPD3HeistState NewState);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsAllowedToFlee(ASBZAIController* AIController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZCivilianManager* Get(const UObject* WorldContextObject);
    
};

