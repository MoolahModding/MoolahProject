#include "SBZAttractableBagItem.h"
#include "SBZAIAttractorComponent.h"

ASBZAttractableBagItem::ASBZAttractableBagItem() {
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
}

