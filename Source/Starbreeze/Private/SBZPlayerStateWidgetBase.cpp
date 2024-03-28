#include "SBZPlayerStateWidgetBase.h"

bool USBZPlayerStateWidgetBase::IsWidgetForPlayerState(ASBZPlayerState* NewPlayerState) {
    return false;
}

bool USBZPlayerStateWidgetBase::IsForLocalPlayerState() const {
    return false;
}

void USBZPlayerStateWidgetBase::InitializePlayerState(ASBZPlayerState* InPlayerState) {
}

USBZPlayerStateWidgetBase::USBZPlayerStateWidgetBase() {
    this->PlayerState = NULL;
}

