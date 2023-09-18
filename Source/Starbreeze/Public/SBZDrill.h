#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBZDrillState.h"
#include "SBZComponentSelector.h"
#include "SBZDrillCompleteDelegate.h"
#include "SBZDrill.generated.h"

class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;
class USBZOutlineAsset;
class USBZOutlineComponent;

UCLASS(Blueprintable)
class ASBZDrill : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZDrillComplete OnDrillCompleteServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ESBZDrillState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* UnjamInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* OutlineAsset;
    
    ASBZDrill(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UnjamDrill();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TEMP_SetShowOutline(bool bShow);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool StartDrill();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUnjamInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateChanged();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StopDrill(ESBZDrillState StopState, float TimeLeftDrill);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartDrill(float EndServerTime);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool JamDrill();
    
};

