#include "SBZAttractableBagItem.h"
#include "SBZAIAttractorComponent.h"

ASBZAttractableBagItem::ASBZAttractableBagItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttractorComponent = CreateDefaultSubobject<USBZAIAttractorComponent>(TEXT("SBZAIAttractorComponent"));
    this->Tags.AddDefaulted(2);
}


