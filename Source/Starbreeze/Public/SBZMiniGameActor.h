#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPD3MiniGameState.h"
#include "SBZOnMinigameDoneDelegateDelegate.h"
#include "SBZMiniGameActor.generated.h"

class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;
class USBZMiniGameComponent;
class USBZOutlineComponent;
class UStaticMeshComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class ASBZMiniGameActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnMinigameDoneDelegate OnMiniGameSuccessful;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsUnlocked, meta=(AllowPrivateAccess=true))
    bool bIsUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsMiniGameIgnored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMiniGameComponent* MiniGameComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* Interactable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
public:
    ASBZMiniGameActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMiniGameIgnored(bool bIgnored);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetEnabled(bool bInEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsUnlocked();
    
    UFUNCTION(BlueprintCallable)
    void OnMiniGameStateChanged(EPD3MiniGameState OldState, EPD3MiniGameState NewState, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractableStateChanged(const USBZBaseInteractableComponent* InteractableComponent, bool bInNewState);
    
    UFUNCTION(BlueprintCallable)
    void OnAckCompleteInteraction(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* Interactor, bool bIsLocallyControlledInteractor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetMiniGameIgnored(bool bIgnored);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMiniGameSuccess(bool bDoCosmetics);
    
};

