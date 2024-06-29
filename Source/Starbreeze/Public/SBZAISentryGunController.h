#pragma once
#include "CoreMinimal.h"
#include "SBZAIArmedPawnController.h"
#include "SBZDamageInstigatorInterface.h"
#include "SBZAISentryGunController.generated.h"

UCLASS(Blueprintable)
class ASBZAISentryGunController : public ASBZAIArmedPawnController, public ISBZDamageInstigatorInterface {
    GENERATED_BODY()
public:
    ASBZAISentryGunController(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

