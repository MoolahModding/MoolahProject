#include "SBZRenderTargetWidgetComponent.h"

USBZRenderTargetWidgetComponent::USBZRenderTargetWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerRenderTimeDelay = 0.50f;
}

void USBZRenderTargetWidgetComponent::SetWidgetAsTextureParameter(UMaterialInstanceDynamic* Target, const FName& ParameterName) {
}

UUserWidget* USBZRenderTargetWidgetComponent::GetUserWidgetInitialized() {
    return NULL;
}


