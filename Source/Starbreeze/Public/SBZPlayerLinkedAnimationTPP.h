#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZCharacterLinkedAnimation.h"
#include "SBZDefeatStateAnimationHandler.h"
#include "SBZPlayerLinkedAnimationTPP.generated.h"

class ASBZPlayerCharacter;

UCLASS(Blueprintable, NonTransient)
class USBZPlayerLinkedAnimationTPP : public USBZCharacterLinkedAnimation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator UpperBodyAimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZDefeatStateAnimationHandler DefeatStateAnimationHandler;
    
public:
    USBZPlayerLinkedAnimationTPP();

};

