#include "SBZGhostTool.h"
#include "Components/SkeletalMeshComponent.h"
#include "SBZOutlineComponent.h"

ASBZGhostTool::ASBZGhostTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
    this->SkeletalMesh = (USkeletalMeshComponent*)RootComponent;
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->OutlineAsset = NULL;
}



