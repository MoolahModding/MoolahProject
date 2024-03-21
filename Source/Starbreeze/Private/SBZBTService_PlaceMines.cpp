#include "SBZBTService_PlaceMines.h"

USBZBTService_PlaceMines::USBZBTService_PlaceMines() {
    this->PlacedMine = NULL;
    this->MinWallAndMineDistance2D = 100.00f;
    this->MinDistanceToMinesZ = 150.00f;
    this->MaxMinesPlaced = 5;
}

