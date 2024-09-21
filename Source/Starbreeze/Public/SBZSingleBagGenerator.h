#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZBagHandle.h"
#include "SBZBagPickedUpDelegate.h"
#include "SBZBreakableInterface.h"
#include "SBZSingleBagGenerator.generated.h"

class USBZBagType;
class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;
class USBZOutlineComponent;

UCLASS(Blueprintable)
class ASBZSingleBagGenerator : public AActor, public ISBZBreakableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBagPickedUp OnServerBagPickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBagType* BagType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBagType* SecondaryBagType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBagHandle BagHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* Interactable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* Outline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ShouldUseSecondaryType, meta=(AllowPrivateAccess=true))
    bool bIsSecondaryTypeUsed;
    
    ASBZSingleBagGenerator(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInteractionEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShouldUseSecondaryType();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ChangeToSecondaryType();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInteractionEnabledStateChanged(const USBZBaseInteractableComponent* InteractableComponent, bool bEnabled);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleInteraction(USBZBaseInteractableComponent* Comp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeToSecondaryType();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnChangedToSecondaryType(bool bDoCosmetics);
    

    // Fix for true pure virtual functions not being implemented
};

