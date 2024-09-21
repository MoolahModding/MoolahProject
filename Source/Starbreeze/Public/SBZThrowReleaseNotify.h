#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBZThrowReleaseNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STARBREEZE_API USBZThrowReleaseNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseThrowBoneTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ThrowBoneComponentTransform;
    
    USBZThrowReleaseNotify();

};

