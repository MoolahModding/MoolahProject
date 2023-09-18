#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "SBZVoiceComponentInterface.h"
#include "SBZNarrator.generated.h"

class USBZCharacterVoiceComponent;

UCLASS(Blueprintable)
class ASBZNarrator : public AInfo, public ISBZVoiceComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCharacterVoiceComponent* VoiceComponent;
    
public:
    ASBZNarrator(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

