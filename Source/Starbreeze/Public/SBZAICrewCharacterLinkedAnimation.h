#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZCharacterLinkedAnimation.h"
#include "SBZDefeatStateAnimationHandler.h"
#include "SBZAICrewCharacterLinkedAnimation.generated.h"

class ASBZAICrewCharacter;

UCLASS(Blueprintable, NonTransient)
class USBZAICrewCharacterLinkedAnimation : public USBZCharacterLinkedAnimation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICrewCharacter* AICrewCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator UpperBodyAimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZDefeatStateAnimationHandler DefeatStateAnimationHandler;
    
public:
    USBZAICrewCharacterLinkedAnimation();

};

