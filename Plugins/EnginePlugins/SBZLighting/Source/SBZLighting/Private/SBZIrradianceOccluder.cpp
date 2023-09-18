#include "SBZIrradianceOccluder.h"
#include "SBZIrradianceOccluderComponent.h"

ASBZIrradianceOccluder::ASBZIrradianceOccluder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IrradianceOccluderComponent = CreateDefaultSubobject<USBZIrradianceOccluderComponent>(TEXT("IrradianceOccluder0"));
}


