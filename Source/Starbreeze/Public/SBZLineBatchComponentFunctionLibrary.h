#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "SBZLineBatchComponentFunctionLibrary.generated.h"

class UCameraComponent;
class ULineBatchComponent;

UCLASS(Blueprintable)
class USBZLineBatchComponentFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZLineBatchComponentFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void Flush(ULineBatchComponent* LineBatcher);
    
    UFUNCTION(BlueprintCallable)
    static void DrawSphere(ULineBatchComponent* LineBatcher, const FVector Center, float Radius, int32 Segments, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawPoint(ULineBatchComponent* LineBatcher, const FVector Position, float Size, FLinearColor PointColor, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DrawPlane(ULineBatchComponent* LineBatcher, const FPlane& PlaneCoordinates, const FVector Location, float Size, FLinearColor PlaneColor, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DrawLine(ULineBatchComponent* LineBatcher, const FVector LineStart, const FVector LineEnd, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawFrustum(ULineBatchComponent* LineBatcher, const FTransform& FrustumTransform, FLinearColor FrustumColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawFloatHistory(ULineBatchComponent* LineBatcher, const FDebugFloatHistory& FloatHistory, const FTransform& DrawTransform, FVector2D DrawSize, FLinearColor DrawColor, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDashedLine(ULineBatchComponent* LineBatcher, const FVector& Start, const FVector& End, const FLinearColor& Color, float DashSize, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DrawCylinder(ULineBatchComponent* LineBatcher, const FVector Start, const FVector End, float Radius, int32 Segments, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawCoordinateSystem(ULineBatchComponent* LineBatcher, const FVector AxisLoc, const FRotator AxisRot, float Scale, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawCone(ULineBatchComponent* LineBatcher, const FVector Origin, const FVector Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawCircle(ULineBatchComponent* LineBatcher, FVector Center, float Radius, int32 NumSegments, FLinearColor LineColor, float Duration, float Thickness, FVector YAxis, FVector ZAxis, bool bDrawAxis);
    
    UFUNCTION(BlueprintCallable)
    static void DrawCapsule(ULineBatchComponent* LineBatcher, const FVector Center, float HalfHeight, float Radius, const FRotator Rotation, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawCamera(ULineBatchComponent* LineBatcher, const UCameraComponent* CameraComponent, FLinearColor CameraColor, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DrawBox(ULineBatchComponent* LineBatcher, const FVector Center, FVector Extent, FLinearColor LineColor, const FRotator Rotation, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void DrawArrow(ULineBatchComponent* LineBatcher, const FVector LineStart, const FVector LineEnd, float ArrowSize, FLinearColor LineColor, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable)
    static void Draw3dArrow(ULineBatchComponent* LineBatcher, const FVector LineStart, const FVector LineEnd, float ArrowSize, float ArrowAngle, FLinearColor LineColor, float Duration, float Thickness);
    
};

