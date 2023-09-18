#include "SBZDebugDrawingManager.h"

ASBZDebugDrawingManager::ASBZDebugDrawingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    *p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this) = ROLE_SimulatedProxy;
}

void ASBZDebugDrawingManager::ReplicateShapes_Implementation(int32 UncompressedPointsSize, const TArray<uint8>& InCompressedPoints, int32 UncompressedLinesSize, const TArray<uint8>& InCompressedLines, int32 UncompressedSpheresSize, const TArray<uint8>& InCompressedSpheres, int32 UncompressedCapsulesSize, const TArray<uint8>& InCompressedCapsules, int32 UncompressedTextsSize, const TArray<uint8>& InCompressedTexts) {
}


