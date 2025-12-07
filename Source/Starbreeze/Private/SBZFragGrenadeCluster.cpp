#include "SBZFragGrenadeCluster.h"

ASBZFragGrenadeCluster::ASBZFragGrenadeCluster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->AdditionalRandomDelay = 0.25f;
}


