#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHoudiniLandscapeOutputBakeType.h"
#include "HoudiniLandscapePtr.generated.h"

class ALandscapeProxy;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniLandscapePtr : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniLandscapeOutputBakeType BakeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EditLayerName;
    
    UHoudiniLandscapePtr();

};

