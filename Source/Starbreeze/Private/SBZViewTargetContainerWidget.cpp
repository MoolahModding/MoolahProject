#include "SBZViewTargetContainerWidget.h"
#include "Components/SlateWrapperTypes.h"

USBZViewTargetContainerWidget::USBZViewTargetContainerWidget() {
    this->ViewTargetWidgetClass = NULL;
    this->ViewTargetWidgetClass = NULL;
    this->Panel_ViewTargetWidgets = NULL;
    this->CurrentIndex = -1;
    this->CurrentControlsReferenceID = -1;
    this->Visibility = ESlateVisibility::Collapsed;
}

void USBZViewTargetContainerWidget::OnViewTargetChanged(ASBZPlayerController* InPlayerController, const TScriptInterface<ISBZViewTargetCollectionInterface>& InViewTargetCollection) {
}



