#include "SBZPhoneTool.h"
#include "Components/StaticMeshComponent.h"

void ASBZPhoneTool::Multicast_ToggleScreenMode_Implementation(ESBZPhoneScreenState NewScreenState) {
}

ASBZPhoneTool::ASBZPhoneTool() {
    this->MiniGameWidget = NULL;
    this->GlowMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

