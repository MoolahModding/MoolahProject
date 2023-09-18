#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/StaticMesh.h"
#include "HoudiniStaticMesh.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniStaticMesh : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasTangents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasColors;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumUVLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPerFaceMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<FVector> VertexPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> TriangleIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<FColor> VertexInstanceColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<FVector> VertexInstanceNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<FVector> VertexInstanceUTangents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<FVector> VertexInstanceVTangents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> VertexInstanceUVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<int32> MaterialIDsPerTriangle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticMaterial> StaticMaterials;
    
public:
    UHoudiniStaticMesh();

    UFUNCTION()
    void SetVertexPosition(uint32 InVertexIndex, const FVector& InPosition);
    
    UFUNCTION()
    void SetTriangleVertexVTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector& InVTangent);
    
    UFUNCTION()
    void SetTriangleVertexUV(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, uint8 InUVLayer, const FVector2D& InUV);
    
    UFUNCTION()
    void SetTriangleVertexUTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector& InUTangent);
    
    UFUNCTION()
    void SetTriangleVertexNormal(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector& InNormal);
    
    UFUNCTION()
    void SetTriangleVertexIndices(uint32 InTriangleIndex, const FIntVector& InTriangleVertexIndices);
    
    UFUNCTION()
    void SetTriangleVertexColor(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FColor& InColor);
    
    UFUNCTION()
    void SetTriangleMaterialID(uint32 InTriangleIndex, int32 InMaterialID);
    
    UFUNCTION()
    void SetStaticMaterial(uint32 InMaterialIndex, const FStaticMaterial& InStaticMaterial);
    
    UFUNCTION()
    void SetNumUVLayers(uint32 InNumUVLayers);
    
    UFUNCTION()
    void SetNumStaticMaterials(uint32 InNumStaticMaterials);
    
    UFUNCTION(BlueprintCallable)
    void SetHasTangents(bool bInHasTangents);
    
    UFUNCTION(BlueprintCallable)
    void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials);
    
    UFUNCTION(BlueprintCallable)
    void SetHasNormals(bool bInHasNormals);
    
    UFUNCTION(BlueprintCallable)
    void SetHasColors(bool bInHasColors);
    
    UFUNCTION(BlueprintCallable)
    void Optimize();
    
    UFUNCTION(BlueprintCallable)
    bool IsValid(bool bInSkipVertexIndicesCheck) const;
    
    UFUNCTION()
    void Initialize(uint32 InNumVertices, uint32 InNumTriangles, uint32 InNumUVLayers, uint32 InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials);
    
    UFUNCTION(BlueprintCallable)
    bool HasTangents() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasPerFaceMaterials() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasNormals() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasColors() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetVertexPositions() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetVertexInstanceVTangents() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector2D> GetVertexInstanceUVs() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetVertexInstanceUTangents() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetVertexInstanceNormals() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FColor> GetVertexInstanceColors() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FIntVector> GetTriangleIndices() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FStaticMaterial> GetStaticMaterials() const;
    
    UFUNCTION()
    uint32 GetNumVertices() const;
    
    UFUNCTION()
    uint32 GetNumVertexInstances() const;
    
    UFUNCTION()
    uint32 GetNumUVLayers() const;
    
    UFUNCTION()
    uint32 GetNumTriangles() const;
    
    UFUNCTION()
    uint32 GetNumStaticMaterials() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaterialIndex(FName InMaterialSlotName) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetMaterialIDsPerTriangle() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInterface* GetMaterial(int32 InMaterialIndex);
    
    UFUNCTION(BlueprintCallable)
    void CalculateTangents(bool bInComputeWeightedNormals);
    
    UFUNCTION(BlueprintCallable)
    void CalculateNormals(bool bInComputeWeightedNormals);
    
    UFUNCTION(BlueprintCallable)
    FBox CalcBounds() const;
    
    UFUNCTION()
    uint32 AddStaticMaterial(const FStaticMaterial& InStaticMaterial);
    
};

