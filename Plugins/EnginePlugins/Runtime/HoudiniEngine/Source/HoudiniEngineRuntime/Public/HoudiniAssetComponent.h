#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/EngineTypes.h"
#include "EHoudiniAssetState.h"
#include "EHoudiniAssetStateResult.h"
#include "EHoudiniStaticMeshMethod.h"
#include "HoudiniAssetStateEvents.h"
#include "HoudiniBakedOutput.h"
#include "HoudiniStaticMeshGenerationProperties.h"
#include "HoudiniAssetComponent.generated.h"

class AActor;
class UHoudiniAsset;
class UHoudiniAssetComponent;
class UHoudiniHandleComponent;
class UHoudiniInput;
class UHoudiniOutput;
class UHoudiniPDGAssetLink;
class UHoudiniParameter;
class UObject;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniAssetComponent : public UPrimitiveComponent, public IHoudiniAssetStateEvents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHoudiniAsset* HoudiniAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCookOnParameterChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUploadTransformsToHoudiniEngine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCookOnTransformChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCookOnAssetInputCook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutputless;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutputTemplateGeos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOutputNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath TemporaryCookFolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath BakeFolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniStaticMeshMethod StaticMeshMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoudiniStaticMeshGenerationProperties StaticMeshGenerationProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshBuildSettings StaticMeshBuildSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideGlobalProxyStaticMeshSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableProxyStaticMeshOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableProxyStaticMeshRefinementByTimerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProxyMeshAutoRefineTimeoutSecondsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssetId;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> NodeIdsToCook;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> OutputNodeCookCounts;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UHoudiniAssetComponent*> DownstreamHoudiniAssets;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ComponentGUID;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid HapiGUID;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HapiAssetName;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniAssetState AssetState;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniAssetState DebugLastAssetState;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoudiniAssetStateResult AssetStateResult;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SubAssetIndex;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssetCookCount;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenLoaded;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenDuplicated;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingDelete;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecookRequested;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRebuildRequested;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCooking;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceNeedUpdate;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastCookSuccess;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bParameterDefinitionUpdateNeeded;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlueprintStructureModified;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlueprintModified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHoudiniParameter*> Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHoudiniInput*> Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHoudiniOutput*> Outputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHoudiniBakedOutput> BakedOutputs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> UntrackedOutputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHoudiniHandleComponent*> HandleComponents;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasComponentTransformChanged;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFullyLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHoudiniPDGAssetLink* PDGAssetLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RefineMeshesTimer;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoProxyMeshNextCookRequested;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UObject*, int32> InputPresets;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBakeAfterNextCook;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCachedIsPreview;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double LastTickTime;
    
public:
    UHoudiniAssetComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

