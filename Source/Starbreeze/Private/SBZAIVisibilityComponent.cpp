#include "SBZAIVisibilityComponent.h"
#include "SBZRandomRoomDynData.h"

static_assert(sizeof(USBZAIVisibilityComponent::FPayload) == 480, "USBZAIVisibilityComponent::FPayload size mismatch, not 480 bytes");
static_assert(sizeof(USBZAIVisibilityComponent::FNode) == 12, "USBZAIVisibilityComponent::FNode size mismatch, not 12 bytes");

const FGuid FSBZAIVisibilityComponentCustomVersion::GUID = FGuid(0x0C180F811, 0x23145495, 0x7625014C, 0x4C018F21);

FCustomVersionRegistration GRegisterSBZAIVisibilityComponentCustomVersion(FSBZAIVisibilityComponentCustomVersion::GUID, FSBZAIVisibilityComponentCustomVersion::LatestVersion, TEXT("SBZAIVisibilityComponentVer"));

USBZAIVisibilityComponent::USBZAIVisibilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReadyForUse = true;
    this->bIsInRandomSublevel = false;
    this->CollisionChannel = ECC_GameTraceChannel1;
    this->CharacterStandHeight = 165.00f;
    this->CharacterCrouchHeight = 79.00f;
    this->NbSubRaycastPerPolarCoord = 5;
    this->MaxSubRaycastSideDistFromCenter = 35.00f;
    this->NbSubRaycastPerPolarCoordCoverPoint = 3;
    this->MaxSubRaycastSideDistFromCenterCoverPoint = 5.00f;
    this->bProcessMeshInstances = false;
    this->bHasFinishedBuilding = false;
    this->bIsParsingDynNode = false;
    this->bDynVerticesHavedBeenTransformed = false;
}

void USBZAIVisibilityComponent::Serialize(FArchive& Ar) {
  Super::Serialize(Ar);
  Ar.UsingCustomVersion(FSBZAIVisibilityComponentCustomVersion::GUID);

  int64 UnknownData = 0;
  if (Ar.IsLoading()) {
    UnknownData = 0;
    Ar << UnknownData;
  }
  if (Ar.IsSaving()) {
    UnknownData = Ar.Tell();
    Ar << UnknownData;
  }
  if (Ar.CustomVer(FSBZAIVisibilityComponentCustomVersion::GUID) >= 4) {
    FTree Tree;
    TArray<FVector> DynVertices;
    TArray<unsigned int> DynIndices;
    TArray<unsigned int> DynTriIndices;
    TArray<FBox> RandomRoomBounds;
    TArray<FSBZRandomRoomDynData> RandomRoomLevelDynData;

    Ar << Tree.BoxCenter;
    Ar << Tree.BoxHalfSize;
    Ar << Tree.NodeHalfSize;
    Ar << Tree.Nodes;
    Ar << Tree.Payloads;

    Ar << DynVertices;
    Ar << DynIndices;
    Ar << DynTriIndices;
    Ar << RandomRoomBounds;

    if (Ar.CustomVer(FSBZAIVisibilityComponentCustomVersion::GUID) >= 5)
      Ar << RandomRoomLevelDynData;
  }
}
inline FArchive& operator<<(FArchive& Ar, USBZAIVisibilityComponent::FPayload& Payload) {
  return Ar;
}
inline FArchive& operator<<(FArchive& Ar, USBZAIVisibilityComponent::FNode& Payload) {
  return Ar;
}

