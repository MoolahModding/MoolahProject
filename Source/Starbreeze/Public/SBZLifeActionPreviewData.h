#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESBZCharacterStance.h"
#include "ESBZEquippableFamily.h"
#include "SBZLifeActionPreviewData.generated.h"

class ASBZEquippable;
class USBZBaseCharacterAnimationCollection;
class USkeletalMesh;

UCLASS(Blueprintable)
class USBZLifeActionPreviewData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBaseCharacterAnimationCollection* AnimationCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCharacterStance PreviewStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZEquippableFamily PreviewEquippableFamily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASBZEquippable> PreviewEquippableClass;
    
    USBZLifeActionPreviewData();

};

