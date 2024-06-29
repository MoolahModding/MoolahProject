#include "SBZWindConfig.h"

USBZWindConfig::USBZWindConfig() {
    this->MaxWindSpeed = 3000.00f;
    this->FoliageMaterialFunctionNames.AddDefaulted(2);
}

USBZWindConfig* USBZWindConfig::Get() {
    return NULL;
}


