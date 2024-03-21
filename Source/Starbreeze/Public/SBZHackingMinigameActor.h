#pragma once
#include "CoreMinimal.h"
#include "ESBZHackingState.h"
#include "SBZMiniGameActor.h"
#include "SBZToolHackableInterface.h"
#include "SBZHackingMinigameActor.generated.h"

class AActor;
class USBZHackableInteractableComponent;
class USBZHackingComponent;
class USBZMarkerDataAsset;

UCLASS(Blueprintable)
class ASBZHackingMinigameActor : public ASBZMiniGameActor, public ISBZToolHackableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHackingComponent* HackingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHackableInteractableComponent* HackableInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* MarkerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MarkerId;
    
public:
    ASBZHackingMinigameActor();
protected:
    UFUNCTION(BlueprintCallable)
    void OnHackingStateChanged(AActor* InOwner, ESBZHackingState NewState, bool bDoCosmetics);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEnabledStateChanged(bool bEnabled, bool bDoCosmetics);
    
    
    // Fix for true pure virtual functions not being implemented
};

