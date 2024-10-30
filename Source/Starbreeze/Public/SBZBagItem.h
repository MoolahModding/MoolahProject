#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZBagHandle.h"
#include "SBZZiplinerInterface.h"
#include "Templates/SubclassOf.h"
#include "SBZBagItem.generated.h"

class ASBZZipline;
class ASBZZiplineMotor;
class UAkAudioEvent;
class UAkComponent;
class USBZBagBoxComponent;
class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;
class USBZSimplePhysicsCorrector;
class USBZZiplineAudioController;
class USBZZiplineSettings;

UCLASS(Blueprintable, NotPlaceable)
class ASBZBagItem : public AActor, public ISBZZiplinerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZZiplineAudioController* ZiplineAudioController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OverrideImpactEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumImpactVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZZiplineMotor> ZiplineMotorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZZiplineMotor* CurrentZiplineMotor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBagBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* Interactable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSimplePhysicsCorrector* PhysicsCorrector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZBagHandle Bag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentZipline, meta=(AllowPrivateAccess=true))
    ASBZZipline* CurrentZipLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TimeOnZipline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMovingOnZiplineForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BagId, meta=(AllowPrivateAccess=true))
    int32 BagId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZZiplineSettings* ZiplineParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCrewAICarry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBroadcastOnHitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MarkerID;
    
public:
    ASBZBagItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SecureBag(bool bDestroyOnSecured);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentZipline();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BagId();
    
    UFUNCTION(BlueprintCallable)
    void OnPickup(USBZBaseInteractableComponent* NewInteractable, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetZipline(ASBZZipline* Zipline, const float InTimeOnZipline, const bool bInIsMovingForward);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnZiplineAttachmentChanged(bool bIsAttached);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDegradationChanged(const int32 DegredationLevel);
    

    // Fix for true pure virtual functions not being implemented
};

