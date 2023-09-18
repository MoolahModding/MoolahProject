#include "HoudiniStaticMesh.h"

UHoudiniStaticMesh::UHoudiniStaticMesh() {
    this->bHasNormals = false;
    this->bHasTangents = false;
    this->bHasColors = false;
    this->NumUVLayers = 0;
    this->bHasPerFaceMaterials = false;
}

void UHoudiniStaticMesh::SetVertexPosition(uint32 InVertexIndex, const FVector& InPosition) {
}

void UHoudiniStaticMesh::SetTriangleVertexVTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector& InVTangent) {
}

void UHoudiniStaticMesh::SetTriangleVertexUV(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, uint8 InUVLayer, const FVector2D& InUV) {
}

void UHoudiniStaticMesh::SetTriangleVertexUTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector& InUTangent) {
}

void UHoudiniStaticMesh::SetTriangleVertexNormal(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector& InNormal) {
}

void UHoudiniStaticMesh::SetTriangleVertexIndices(uint32 InTriangleIndex, const FIntVector& InTriangleVertexIndices) {
}

void UHoudiniStaticMesh::SetTriangleVertexColor(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FColor& InColor) {
}

void UHoudiniStaticMesh::SetTriangleMaterialID(uint32 InTriangleIndex, int32 InMaterialID) {
}

void UHoudiniStaticMesh::SetStaticMaterial(uint32 InMaterialIndex, const FStaticMaterial& InStaticMaterial) {
}

void UHoudiniStaticMesh::SetNumUVLayers(uint32 InNumUVLayers) {
}

void UHoudiniStaticMesh::SetNumStaticMaterials(uint32 InNumStaticMaterials) {
}

void UHoudiniStaticMesh::SetHasTangents(bool bInHasTangents) {
}

void UHoudiniStaticMesh::SetHasPerFaceMaterials(bool bInHasPerFaceMaterials) {
}

void UHoudiniStaticMesh::SetHasNormals(bool bInHasNormals) {
}

void UHoudiniStaticMesh::SetHasColors(bool bInHasColors) {
}

void UHoudiniStaticMesh::Optimize() {
}

bool UHoudiniStaticMesh::IsValid(bool bInSkipVertexIndicesCheck) const {
    return false;
}

void UHoudiniStaticMesh::Initialize(uint32 InNumVertices, uint32 InNumTriangles, uint32 InNumUVLayers, uint32 InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials) {
}

bool UHoudiniStaticMesh::HasTangents() const {
    return false;
}

bool UHoudiniStaticMesh::HasPerFaceMaterials() const {
    return false;
}

bool UHoudiniStaticMesh::HasNormals() const {
    return false;
}

bool UHoudiniStaticMesh::HasColors() const {
    return false;
}

TArray<FVector> UHoudiniStaticMesh::GetVertexPositions() const {
    return TArray<FVector>();
}

TArray<FVector> UHoudiniStaticMesh::GetVertexInstanceVTangents() const {
    return TArray<FVector>();
}

TArray<FVector2D> UHoudiniStaticMesh::GetVertexInstanceUVs() const {
    return TArray<FVector2D>();
}

TArray<FVector> UHoudiniStaticMesh::GetVertexInstanceUTangents() const {
    return TArray<FVector>();
}

TArray<FVector> UHoudiniStaticMesh::GetVertexInstanceNormals() const {
    return TArray<FVector>();
}

TArray<FColor> UHoudiniStaticMesh::GetVertexInstanceColors() const {
    return TArray<FColor>();
}

TArray<FIntVector> UHoudiniStaticMesh::GetTriangleIndices() const {
    return TArray<FIntVector>();
}

TArray<FStaticMaterial> UHoudiniStaticMesh::GetStaticMaterials() const {
    return TArray<FStaticMaterial>();
}

uint32 UHoudiniStaticMesh::GetNumVertices() const {
    return 0;
}

uint32 UHoudiniStaticMesh::GetNumVertexInstances() const {
    return 0;
}

uint32 UHoudiniStaticMesh::GetNumUVLayers() const {
    return 0;
}

uint32 UHoudiniStaticMesh::GetNumTriangles() const {
    return 0;
}

uint32 UHoudiniStaticMesh::GetNumStaticMaterials() const {
    return 0;
}

int32 UHoudiniStaticMesh::GetMaterialIndex(FName InMaterialSlotName) const {
    return 0;
}

TArray<int32> UHoudiniStaticMesh::GetMaterialIDsPerTriangle() const {
    return TArray<int32>();
}

UMaterialInterface* UHoudiniStaticMesh::GetMaterial(int32 InMaterialIndex) {
    return NULL;
}

void UHoudiniStaticMesh::CalculateTangents(bool bInComputeWeightedNormals) {
}

void UHoudiniStaticMesh::CalculateNormals(bool bInComputeWeightedNormals) {
}

FBox UHoudiniStaticMesh::CalcBounds() const {
    return FBox{};
}

uint32 UHoudiniStaticMesh::AddStaticMaterial(const FStaticMaterial& InStaticMaterial) {
    return 0;
}


