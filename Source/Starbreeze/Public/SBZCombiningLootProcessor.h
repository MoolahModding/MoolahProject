#pragma once
#include "CoreMinimal.h"
#include "SBZBagHandle.h"
#include "SBZCombinedBagType.h"
#include "SBZCombiningLootProcesorDelegateDelegate.h"
#include "SBZLootProcessorBase.h"
#include "SBZCombiningLootProcessor.generated.h"

class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;

UCLASS(Blueprintable)
class ASBZCombiningLootProcessor : public ASBZLootProcessorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCombiningLootProcesorDelegate OnBagProcessed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCombinedBagType CombinedBagType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfBagsToCombine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanQueueProcessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* ClaimCombinedBagInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CombinedBags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZBagHandle CombinedBagHandle;
    
public:
    ASBZCombiningLootProcessor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnServerClaimCombinedBagInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_UpdateCombinedBagsCount(int32 NewCount);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnCombinedBagCountUpdated(int32 Count);
    
};

