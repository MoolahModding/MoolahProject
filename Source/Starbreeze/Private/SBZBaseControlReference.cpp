#include "SBZBaseControlReference.h"

FSBZBaseControlReference::FSBZBaseControlReference() {
    this->InputType = ESBZInputType::SingleAction;
    this->HoldActionDuration = 0.00f;
    this->bIsInputRegistered = false;
    this->SingleActionEventType = IE_Pressed;
    this->bIsInputConsumed = false;
}

