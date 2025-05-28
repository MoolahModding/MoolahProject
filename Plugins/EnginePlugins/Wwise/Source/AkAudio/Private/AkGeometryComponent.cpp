#include "AkGeometryComponent.h"

UAkGeometryComponent::UAkGeometryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshType = AkMeshType::CollisionMesh;
    this->LOD = 0;
    this->WeldingThreshold = 0.00f;
    this->bEnableDiffraction = true;
    this->bEnableDiffractionOnBoundaryEdges = false;
    this->AssociatedRoom = NULL;
}

void UAkGeometryComponent::UpdateGeometry() {
}

void UAkGeometryComponent::SendGeometry() {
}

void UAkGeometryComponent::RemoveGeometry() {
}

void UAkGeometryComponent::ConvertMesh() {
}


