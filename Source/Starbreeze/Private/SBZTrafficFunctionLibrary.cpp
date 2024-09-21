#include "SBZTrafficFunctionLibrary.h"
#include "Templates/SubclassOf.h"

USBZTrafficFunctionLibrary::USBZTrafficFunctionLibrary() {
}

void USBZTrafficFunctionLibrary::SpawnEscapeVanWithRoute(UObject* WorldContextObject, TSubclassOf<ASBZWheeledVehicle> EscapeVanActorClass, ASBZTrafficSpline* StartSpline, ASBZTrafficSpline* DestinationSpline, ESBZTrafficNodeExec& Exec, FLatentActionInfo LatentInfo) {
}

void USBZTrafficFunctionLibrary::SpawnEscapeVan(UObject* WorldContextObject, TSubclassOf<ASBZWheeledVehicle> EscapeVanActorClass, const FTransform& SpawnTransform, ESBZTrafficNodeExec& Exec, FLatentActionInfo LatentInfo) {
}

void USBZTrafficFunctionLibrary::SpawnAndDriveSwatVan(UObject* WorldContextObject, ASBZTrafficSpline* StartSpline, ASBZTrafficSpline* DestinationSpline, ESBZTrafficNodeExec& Exec, FLatentActionInfo LatentInfo) {
}

bool USBZTrafficFunctionLibrary::SetEscapeVanRoute(UObject* WorldContextObject, ASBZTrafficSpline* StartSpline, ASBZTrafficSpline* DestinationSpline) {
    return false;
}

void USBZTrafficFunctionLibrary::SetEscapeVan(UObject* WorldContextObject, ASBZWheeledVehicle* Vehicle) {
}

void USBZTrafficFunctionLibrary::SetAndDriveEscapeVanRoute(UObject* WorldContextObject, ASBZWheeledVehicle* NewEscapeVan, ASBZTrafficSpline* StartSpline, ASBZTrafficSpline* DestinationSpline, ESBZTrafficNodeExec& Exec, FLatentActionInfo LatentInfo, bool bTeleportToPathStart) {
}

bool USBZTrafficFunctionLibrary::SetAndDriveAerialVehicleRoute(UObject* WorldContextObject, ASBZAerialVehicle* Vehicle, ASBZTrafficSpline* StartSpline, ASBZTrafficSpline* DestinationSpline) {
    return false;
}

FTransform USBZTrafficFunctionLibrary::GetTrafficSplineGroundTransform(UObject* WorldContextObject, ASBZTrafficSpline* Spline, ESBZTrafficNodeType TransformType) {
    return FTransform{};
}

USBZTrafficManager* USBZTrafficFunctionLibrary::GetTrafficManager(UObject* WorldContextObject) {
    return NULL;
}

FVector USBZTrafficFunctionLibrary::GetLocationAlongPathWithinAngle(UObject* WorldContextObject, bool bDebug, const TArray<ASBZSpline*>& Path, float Distance, FVector Location, FVector ForwardDir, float StepDistance, float MaxDistance, float MaxAngle) {
    return FVector{};
}

void USBZTrafficFunctionLibrary::DriveEscapeVan(UObject* WorldContextObject, ESBZTrafficNodeExec& Exec, FLatentActionInfo LatentInfo) {
}

bool USBZTrafficFunctionLibrary::AppendEscapeVanRoute(UObject* WorldContextObject, ASBZTrafficSpline* DestinationSpline) {
    return false;
}


