#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZAllowedStanceTransition.h"
#include "SBZStanceTransitionDataAsset.generated.h"

UCLASS(Blueprintable)
class USBZStanceTransitionDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAllowedStanceTransition> AllowedStanceTransitions;
    
public:
    USBZStanceTransitionDataAsset();

};

