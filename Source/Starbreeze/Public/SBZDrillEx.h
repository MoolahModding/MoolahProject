#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "GameFramework/Actor.h"
#include "ESBZDrillState.h"
#include "SBZAIActionInteractableInterface.h"
#include "SBZAIAttractorInterface.h"
#include "SBZComponentSelector.h"
#include "SBZDrillCompleteExDelegate.h"
#include "SBZDrillRepData.h"
#include "SBZDrillEx.generated.h"

class APawn;
class USBZAIAttractorComponent;
class USBZBaseInteractableComponent;
class USBZDrillMaterial;
class USBZInteractableComponent;
class USBZInteractorComponent;
class USBZOutlineAsset;
class USBZOutlineComponent;

UCLASS(Blueprintable)
class ASBZDrillEx : public AActor, public ISBZAIActionInteractableInterface, public IAISightTargetInterface, public ISBZAIAttractorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZDrillCompleteEx OnDrillCompleteServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionProgressMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionHeatAddition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Data, meta=(AllowPrivateAccess=true))
    FSBZDrillRepData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownPerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZDrillMaterial*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* UnjamInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* FixTransitionInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* AdjustSpeedInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* ToggleOnOffInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* OutlineAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIAttractorComponent* AttractorComponent;
    
    ASBZDrillEx(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool UnjamDrill();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TurnOff();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ToggleOnOff();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TEMP_SetShowOutline(bool bShow);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool StartDrill();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUnjamInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleOnOffInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged(ESBZDrillState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpeedUpdate(float ProgressRate, float HeatRate);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Data(FSBZDrillRepData& Old);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMaterialChanged(USBZDrillMaterial* Material);
    
    UFUNCTION(BlueprintCallable)
    void OnFixTransitionInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnAdjustSpeedInteraction(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsAdjusting() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool JamDrill();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFastSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgressPerSec() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgressPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeatPerSec() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZDrillMaterial* GetCurrentMaterial() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AdjustSpeed();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetEnabled(bool bEnabled) override PURE_VIRTUAL(SetEnabled, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAttractorInstigator(APawn* NewInstigator) override PURE_VIRTUAL(SetAttractorInstigator,);
    
};

