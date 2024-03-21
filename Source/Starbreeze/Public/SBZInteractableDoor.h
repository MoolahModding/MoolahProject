#pragma once
#include "CoreMinimal.h"
#include "SBZComponentSelector.h"
#include "SBZInteractableGate.h"
#include "SBZPropDamageContext.h"
#include "SBZInteractableDoor.generated.h"

class ASBZRoomVolume;
class UActorComponent;

UCLASS(Blueprintable)
class ASBZInteractableDoor : public ASBZInteractableGate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* SelectedRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSlammedOpenAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZComponentSelector BreachPropDamageSelector;
    
public:
    ASBZInteractableDoor();
private:
    UFUNCTION(BlueprintCallable)
    void HandleBreachPropDamageHits(UActorComponent* PoolComponent, int32 Hits, bool bDoCosmetics, const FSBZPropDamageContext& DamageContext);
    
};

