#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZLootedSignatureDelegate.h"
#include "SBZInstantLoot.generated.h"

class UAkAudioEvent;
class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;
class USBZOutlineComponent;

UCLASS(Blueprintable)
class ASBZInstantLoot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* Interactable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLootedSignature OnLootedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDestroyOnLooted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnLootedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsLooted, meta=(AllowPrivateAccess=true))
    bool bIsLooted;
    
public:
    ASBZInstantLoot();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInteractionEnabled(bool bIsEnabled);
    
private:
    UFUNCTION()
    void OnRep_IsLooted(bool bOldIsLooted);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLooted(bool bDoCosmetics);
    
protected:
    UFUNCTION()
    void HandlePredictedEnd(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION()
    void HandleAckRejectedPredicted(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION()
    void HandleAckComplete(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
};

