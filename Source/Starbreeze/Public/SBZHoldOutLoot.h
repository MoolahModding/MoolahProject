#pragma once
#include "CoreMinimal.h"
#include "SBZSingleBagGenerator.h"
#include "SBZHoldOutLoot.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS(Blueprintable)
class ASBZHoldOutLoot : public ASBZSingleBagGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SpawnAKEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TrackerAKEvent;
    
public:
    ASBZHoldOutLoot(const FObjectInitializer& ObjectInitializer);

};

