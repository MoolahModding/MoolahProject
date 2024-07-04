#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZDebugDrawingManager.generated.h"

UCLASS(Blueprintable)
class ASBZDebugDrawingManager : public AActor {
    GENERATED_BODY()
public:
    ASBZDebugDrawingManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ReplicateShapes(int32 UncompressedPointsSize, const TArray<uint8>& InCompressedPoints, int32 UncompressedLinesSize, const TArray<uint8>& InCompressedLines, int32 UncompressedSpheresSize, const TArray<uint8>& InCompressedSpheres, int32 UncompressedCapsulesSize, const TArray<uint8>& InCompressedCapsules, int32 UncompressedTextsSize, const TArray<uint8>& InCompressedTexts);
    
};

