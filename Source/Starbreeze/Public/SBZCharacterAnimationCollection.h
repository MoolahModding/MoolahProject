#pragma once
#include "CoreMinimal.h"
#include "SBZAnimationContainer.h"
#include "SBZBaseCharacterAnimationCollection.h"
#include "SBZCharacterAnimationCollection.generated.h"

UCLASS(Blueprintable)
class USBZCharacterAnimationCollection : public USBZBaseCharacterAnimationCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAnimationContainer LeanAdditiveBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAnimationContainer StanceTransitionLFRFMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAnimationContainer StanceTransitionRFLFMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAnimationContainer CrouchTransitionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAnimationContainer UncrouchTransitionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAnimationContainer CrouchMoveTransitionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAnimationContainer UncrouchMoveTransitionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAnimationContainer MeleeMontage;
    
    USBZCharacterAnimationCollection();

};

