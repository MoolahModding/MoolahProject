#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniAssetComponent.h"
#include "HoudiniOutputObjectIdentifier.h"
#include "HoudiniAssetBlueprintComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FauxBPProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoudiniAssetChanged;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUpdatedFromTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInBlueprintEditor;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanDeleteHoudiniNodes;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRegisteredComponentTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FHoudiniOutputObjectIdentifier, FGuid> CachedOutputNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FGuid> CachedInputNodes;
    
public:
    UHoudiniAssetBlueprintComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetToggleValueAt(const FString& Name, bool Value, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatParameter(const FString& Name, float Value, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool HasParameter(const FString& Name);
    
};

