#include "SBZGhostTool.h"
#include "Components/SkeletalMeshComponent.h"
#include "SBZOutlineComponent.h"


ASBZGhostTool::ASBZGhostTool() {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->OutlineAsset = NULL;
}

