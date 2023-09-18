#include "SBZGhostTool.h"
#include "Components/SkeletalMeshComponent.h"
#include "SBZOutlineComponent.h"

ASBZGhostTool::ASBZGhostTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->OutlineAsset = NULL;
    FProperty* p_bActorEnableCollision = GetClass()->FindPropertyByName("bActorEnableCollision");
    *p_bActorEnableCollision->ContainerPtrToValuePtr<uint8>(this) = false;
    this->RootComponent = SkeletalMesh;
}



