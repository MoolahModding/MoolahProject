#pragma once
#include "CoreMinimal.h"
#include "SBZAIAction.h"
#include "SBZAIAction_SetHostile.generated.h"

class AActor;
class USBZAIAttractorComponent;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIAction_SetHostile : public USBZAIAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIAttractorComponent* AttractorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Hostile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCheckSightPerception;
    
public:
    USBZAIAction_SetHostile();
};

