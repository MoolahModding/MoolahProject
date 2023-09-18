#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZOnLocationSelectedEventDelegate.h"
#include "SBZSpawnLocation.h"
#include "SBZSpawnLocationHandlerDelegateDelegate.h"
#include "SBZSpawnLocationHandler.generated.h"

class ASBZHackableActor;
class UClass;
class USBZBaseInteractableComponent;
class USBZInteractorComponent;

UCLASS(Blueprintable)
class ASBZSpawnLocationHandler : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnLocationSelectedEvent OnLocationSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZSpawnLocationHandlerDelegate OnKeyItemPickedUp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRandomizeOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSpawnLocation> SpawnLocationArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZHackableActor* HackableActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZHackableActor*> HackableActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HackableEmailIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ImportantItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, int32> RandomLootToSpawnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RandomIndex;
    
public:
    ASBZSpawnLocationHandler(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TriggerSpawnManually();
    
    UFUNCTION(BlueprintCallable)
    void OnServerImportantLootPickedUp(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
};

