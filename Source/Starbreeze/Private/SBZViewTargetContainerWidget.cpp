#include "SBZViewTargetContainerWidget.h"

void USBZViewTargetContainerWidget::OnViewTargetChanged(ASBZPlayerController* InPlayerController, const TScriptInterface<ISBZViewTargetCollectionInterface>& InViewTargetCollection) {
}


USBZViewTargetContainerWidget::USBZViewTargetContainerWidget() {
    this->ViewTargetWidgetClass = NULL;
    this->Panel_ViewTargetWidgets = NULL;
    this->CurrentIndex = -1;
    this->CurrentControlsReferenceID = -1;
}

