#pragma once
#include "CoreMinimal.h"
#include "SBZInteractDisplayDataCollection.h"
#include "SBZInteractModeDisplayData.h"
#include "SBZInteractorComponent.h"
#include "SBZLockCameraData.h"
#include "SBZPlayerInteractorComponent.generated.h"

class ASBZPlayerController;
class UCurveFloat;
class USBZBaseInteractableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZPlayerInteractorComponent : public USBZInteractorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLockCameraData InteractionLockCameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DistancePitchCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZInteractDisplayDataCollection Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsValidThisFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerController* LocalPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInstantModeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFrontSelected;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 LastFailedScreenInteractableCheckFrame;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CheckScreenInteractableFrameInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PendingOnScreenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseInteractableComponent* PendingOnScreenInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PendingOnScreenTime;
    
public:
    USBZPlayerInteractorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShowInteractWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentInstant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZBaseInteractableComponent* GetSelectedInteraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSBZInteractModeDisplayData GetModeDisplayData(const FSBZInteractDisplayDataCollection& Collection, bool bIsInstant, bool& bOutIsFront);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInteract() const;
    
};

