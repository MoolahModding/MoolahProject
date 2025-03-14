#include "SBZMaskData.h"

USBZMaskData::USBZMaskData() {
    this->Type = ESBZMaskType::Strap;
    this->Mould = NULL;
    this->Material = NULL;
    this->Pattern = NULL;
    this->VFX = NULL;
    this->bNeedCollisionWithCharacter = false;
}


