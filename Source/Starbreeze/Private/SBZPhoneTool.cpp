#include "SBZPhoneTool.h"
#include "Components/StaticMeshComponent.h"

ASBZPhoneTool::ASBZPhoneTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicateRootAttachment = false;
    this->MiniGameWidget = NULL;
    this->GlowMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->GlowMesh->SetupAttachment(RootComponent);
}

void ASBZPhoneTool::Multicast_ToggleScreenMode_Implementation(ESBZPhoneScreenState NewScreenState) {
}


