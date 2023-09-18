#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZComponentSelector.h"
#include "SBZOutlineComponent.generated.h"

class UMeshComponent;
class UObject;
class USBZBaseInteractableComponent;
class USBZOutlineAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZOutlineComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* DefaultAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZComponentSelector> MeshSelectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector InteractableSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* InteractableFocusAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveReplicated, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* ActiveReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsReplicatedHidden, meta=(AllowPrivateAccess=true))
    bool bIsReplicatedHidden;
    
public:
    USBZOutlineComponent();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetReplicatedHidden(bool bInIsReplicatedHidden);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGloballyHideAllOutlines(const UObject* WorldContextObject, bool bVal);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMesh(UMeshComponent* Mesh, bool bRemoveFromSelectorsIfUninitialized);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsReplicatedHidden();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveReplicated();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetReplicatedHidden(bool bInIsReplicatedHidden);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetActiveReplicated(USBZOutlineAsset* NewActiveReplicated);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionFocusChanged(const USBZBaseInteractableComponent* InteractableComponent, bool bInFocus);
    
    UFUNCTION(BlueprintCallable)
    void HandleInteractionEnabledStateChanged(const USBZBaseInteractableComponent* InteractableComponent, bool bEnabled);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddMesh(UMeshComponent* Mesh, bool bAddToSelectorsIfUninitialized);
    
};

