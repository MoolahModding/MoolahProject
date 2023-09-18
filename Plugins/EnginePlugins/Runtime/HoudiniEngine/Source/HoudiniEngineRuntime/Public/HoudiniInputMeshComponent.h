#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputSceneComponent.h"
#include "HoudiniInputMeshComponent.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MeshComponentsMaterials;
    
    UHoudiniInputMeshComponent();

};

