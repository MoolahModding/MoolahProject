#include "SBZAttractableBagItem.h"
#include "SBZAIAttractorComponent.h"

ASBZAttractableBagItem::ASBZAttractableBagItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(3);
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
}


