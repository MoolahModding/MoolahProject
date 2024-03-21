#pragma once
#include "CoreMinimal.h"
#include "SBZOnTelegraphAttackComponent.h"
#include "SBZTelegraphAttackSoundComponent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZTelegraphAttackSoundComponent : public USBZOnTelegraphAttackComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TelegraphStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TelegraphStopEvent;
    
public:
    USBZTelegraphAttackSoundComponent();
};

