#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZEffectChanceData.h"
#include "SBZSeasonalEventItemBase.generated.h"

class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;

UCLASS(Blueprintable)
class ASBZSeasonalEventItemBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZEffectChanceData> EffectChanceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDestroyedOnPickUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthGained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArmorChunksToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumberOfMagazines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumberOfGrenades;
    
public:
    ASBZSeasonalEventItemBase();
protected:
    UFUNCTION()
    void OnServerCompleteInteraction(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnItemPickedUp(bool bIsPositiveEffect);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnItemPickedUp(bool bIsPositiveEffect);
    
};

