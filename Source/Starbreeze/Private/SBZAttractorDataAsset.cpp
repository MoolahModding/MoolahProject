#include "SBZAttractorDataAsset.h"
#include "Perception/AISense_Sight.h"

USBZAttractorDataAsset::USBZAttractorDataAsset() {
    this->DefaultSense = UAISense_Sight::StaticClass();
    this->MaxHeistStateToBeEnabled = EPD3HeistState::PointOfNoReturn;
    this->Priority = ESBZAIAttractorPriority::VeryLow;
    this->Radius = 800.00f;
    this->bUseMaxConcurrentUsers = true;
    this->MaxConcurrentUsers = 1;
    this->MaxUses = 1;
    this->bDestroyOnComplete = false;
    this->bIsReusable = false;
}


