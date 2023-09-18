#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HoudiniLandscapeEditLayer.generated.h"

class ALandscapeProxy;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniLandscapeEditLayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LayerName;
    
    UHoudiniLandscapeEditLayer();

};

