#include "SBZTacticalNavigationQueryFilter.h"

USBZTacticalNavigationQueryFilter::USBZTacticalNavigationQueryFilter() {
    this->VisibilityCostMultiplier = 4.00f;
    this->DistanceCostMultiplier = 20.00f;
    this->HeuristicScale = 0.90f;
    this->EnemyExcluderRadius = 400.00f;
    this->MaxRelevantDist = 1000.00f;
    this->VisibilityScoreBoostMultiplier = 5.00f;
    this->RejectingHeightDiffBetweenNodeAndEnemy = 300.00f;
    this->bActive = true;
    this->AreaFixedSizeMinAdditionnalLength = 1500;
    this->AreaFixedSizeMaxAdditionnalLength = 2500;
    this->AreaFixedSizeMinAdditionnalWidth = 2500;
    this->AreaFixedSizeMaxAdditionnalWidth = 4000;
}


