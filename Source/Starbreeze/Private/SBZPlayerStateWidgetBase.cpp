#include "SBZPlayerStateWidgetBase.h"

USBZPlayerStateWidgetBase::USBZPlayerStateWidgetBase() {
    this->PlayerState = NULL;
}

bool USBZPlayerStateWidgetBase::IsWidgetForPlayerState(ASBZPlayerState* NewPlayerState) {
    return false;
}

bool USBZPlayerStateWidgetBase::IsForLocalPlayerState() const {
    return false;
}

void USBZPlayerStateWidgetBase::InitializePlayerState(ASBZPlayerState* InPlayerState) {
}


