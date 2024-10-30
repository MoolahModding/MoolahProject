#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZPlaceItemAbility.generated.h"

class AActor;
class ASBZCharacter;
class ASBZPlaceableCharges;

UCLASS(Blueprintable)
class USBZPlaceItemAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* GhostActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlaceableCharges* PlaceableActor;
    
public:
    USBZPlaceItemAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaSeconds);
    
};

