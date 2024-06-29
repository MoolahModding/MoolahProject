#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZPlaceToolAbility.generated.h"

class ASBZGhostTool;
class ASBZPlayerCharacter;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class USBZPlaceToolAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZGhostTool* GhostTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* AttachParent;
    
public:
    USBZPlaceToolAbility();

};

