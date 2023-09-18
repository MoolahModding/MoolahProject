#include "SBZBaseControlReference.h"

FSBZBaseControlReference::FSBZBaseControlReference() {
    this->bIsAction = false;
    this->bIsInputRegistered = false;
    this->EventType = IE_Pressed;
    this->bIsInputConsumed = false;
}

