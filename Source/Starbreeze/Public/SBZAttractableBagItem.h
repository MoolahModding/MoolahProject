#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "SBZAIActionInteractableInterface.h"
#include "SBZAIAttractorInterface.h"
#include "SBZBagItem.h"
#include "SBZRoomVolumeInterface.h"
#include "SBZAttractableBagItem.generated.h"

class APawn;
class ASBZRoomVolume;
class USBZAIAttractorComponent;

UCLASS(Blueprintable)
class ASBZAttractableBagItem : public ASBZBagItem, public ISBZAIActionInteractableInterface, public IAISightTargetInterface, public ISBZRoomVolumeInterface, public ISBZAIAttractorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIAttractorComponent* AttractorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZRoomVolume*> RoomVolumes;
    
public:
    ASBZAttractableBagItem(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetEnabled(bool bEnabled) override PURE_VIRTUAL(SetEnabled, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAttractorInstigator(APawn* NewInstigator) override PURE_VIRTUAL(SetAttractorInstigator,);
    
};

