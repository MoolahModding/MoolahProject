#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "HoudiniInputStaticMesh.generated.h"

class UHoudiniInputStaticMesh;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputStaticMesh : public UHoudiniInputObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHoudiniInputStaticMesh*> BlueprintStaticMeshes;
    
    UHoudiniInputStaticMesh();

};

