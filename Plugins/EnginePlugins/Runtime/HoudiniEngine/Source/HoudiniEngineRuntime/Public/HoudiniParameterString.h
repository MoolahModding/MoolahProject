#pragma once
#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterString.generated.h"

class UObject;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterString : public UHoudiniParameter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DefaultValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ChosenAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAssetRef;
    
public:
    UHoudiniParameterString();

};

