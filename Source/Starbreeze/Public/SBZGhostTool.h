#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBZPlacementState.h"
#include "SBZGhostTool.generated.h"

class USBZOutlineAsset;
class USBZOutlineComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASBZGhostTool : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineAsset* OutlineAsset;
    
public:
    ASBZGhostTool(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGhostToolStateChanged(ESBZPlacementState NewPlacementState);
    
};

