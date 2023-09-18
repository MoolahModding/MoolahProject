#include "SBZPawnPlatformSpawnSettings.h"

FSBZPawnPlatformSpawnSettings::FSBZPawnPlatformSpawnSettings() {
    this->AllowedSpawnSignificance = ESBZSpawnSignificance::Low;
    this->PopulationLimit = 0;
    this->MaximumSpawnsPerFrame = 0;
    this->MaximumDestroysPerFrame = 0;
}

