#include "SBZWindConfig.h"

USBZWindConfig* USBZWindConfig::Get() {
    return NULL;
}

USBZWindConfig::USBZWindConfig() {
    this->MaxWindSpeed = 3000.00f;
    this->FoliageMaterialFunctionNames.AddDefaulted(2);
}

