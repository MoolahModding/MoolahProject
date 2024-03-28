#pragma once
#include "CoreMinimal.h"
#include "SBZCosmeticsDataAsset.h"
#include "SBZMaskMouldData.generated.h"

class USkeletalMesh;
class UStaticMesh;
class UTexture2D;

UCLASS(Blueprintable)
class STARBREEZE_API USBZMaskMouldData : public USBZCosmeticsDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BaseTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> NormalTexture;
    
public:
    USBZMaskMouldData();
};

