#include "SBZPlayerGrenadeProjectileCluster.h"

ASBZPlayerGrenadeProjectileCluster::ASBZPlayerGrenadeProjectileCluster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->AdditionalRandomDelay = 1.00f;
}


