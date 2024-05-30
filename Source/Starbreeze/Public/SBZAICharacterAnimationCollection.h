#pragma once
#include "CoreMinimal.h"
#include "SBZCharacterAnimationCollection.h"
#include "SBZStopAndTurnMontageInfo.h"
#include "SBZAICharacterAnimationCollection.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class USBZAICharacterAnimationCollection : public USBZCharacterAnimationCollection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimMontage*, FSBZStopAndTurnMontageInfo> StopAndTurnMontageInfos;
    
public:
    USBZAICharacterAnimationCollection();

};

