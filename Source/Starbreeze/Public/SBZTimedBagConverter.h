#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZBreakableInterface.h"
#include "SBZTimedBagConverterDelegateDelegate.h"
#include "SBZTimedBagConverter.generated.h"

class ASBZSingleBagGenerator;
class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;

UCLASS(Blueprintable)
class ASBZTimedBagConverter : public AActor, public ISBZBreakableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZSingleBagGenerator* AttachedBagGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTimedBagConverterDelegate OnBagConverterDisabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTimedBagConverterDelegate OnBagConverted;
    
public:
    ASBZTimedBagConverter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInteractionEnabled(bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnServerCompleteInteraction(USBZBaseInteractableComponent* InInteractableComponent, USBZInteractorComponent* Interactor, bool bIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnServerBagPickedUp();
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionEnabledStateChanged(const USBZBaseInteractableComponent* InInteractableComponent, bool bNewState);
    
    UFUNCTION(BlueprintCallable)
    void OnECMCountChanged(int32 NewCount, int32 OldCount, float AddedTime, bool bInIsSignalScanActive);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnECMJammedChanged(bool bIsJammed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnBagConverted();
    

    // Fix for true pure virtual functions not being implemented
};

