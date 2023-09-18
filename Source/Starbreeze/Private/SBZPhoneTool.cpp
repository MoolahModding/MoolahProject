#include "SBZPhoneTool.h"

#include "SBZToolSkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

ASBZPhoneTool::ASBZPhoneTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MiniGameWidget = NULL;
    this->GlowMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->GlowMesh->SetupAttachment(SkeletalMesh);
    this->bReplicateRootAttachment = false;
}

void ASBZPhoneTool::Multicast_ToggleScreenMode_Implementation(ESBZPhoneScreenState NewScreenState) {
}


