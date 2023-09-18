#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "ESBZTrafficNodeExec.h"
#include "ESBZTrafficNodeType.h"
#include "SBZTrafficFunctionLibrary.generated.h"

class ASBZAerialVehicle;
class ASBZSpline;
class ASBZTrafficSpline;
class ASBZWheeledVehicle;
class UClass;
class UObject;
class USBZTrafficManager;

UCLASS(Blueprintable)
class USBZTrafficFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZTrafficFunctionLibrary();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SpawnEscapeVanWithRoute(UObject* WorldContextObject, UClass* EscapeVanActorClass, ASBZTrafficSpline* StartSpline, ASBZTrafficSpline* DestinationSpline, ESBZTrafficNodeExec& Exec, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SpawnEscapeVan(UObject* WorldContextObject, UClass* EscapeVanActorClass, const FTransform& SpawnTransform, ESBZTrafficNodeExec& Exec, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SpawnAndDriveSwatVan(UObject* WorldContextObject, ASBZTrafficSpline* StartSpline, ASBZTrafficSpline* DestinationSpline, ESBZTrafficNodeExec& Exec, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetEscapeVanRoute(UObject* WorldContextObject, ASBZTrafficSpline* StartSpline, ASBZTrafficSpline* DestinationSpline);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEscapeVan(UObject* WorldContextObject, ASBZWheeledVehicle* Vehicle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SetAndDriveEscapeVanRoute(UObject* WorldContextObject, ASBZWheeledVehicle* NewEscapeVan, ASBZTrafficSpline* StartSpline, ASBZTrafficSpline* DestinationSpline, ESBZTrafficNodeExec& Exec, FLatentActionInfo LatentInfo, bool bTeleportToPathStart);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetAndDriveAerialVehicleRoute(UObject* WorldContextObject, ASBZAerialVehicle* Vehicle, ASBZTrafficSpline* StartSpline, ASBZTrafficSpline* DestinationSpline);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FTransform GetTrafficSplineGroundTransform(UObject* WorldContextObject, ASBZTrafficSpline* Spline, ESBZTrafficNodeType TransformType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZTrafficManager* GetTrafficManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector GetLocationAlongPathWithinAngle(UObject* WorldContextObject, bool bDebug, const TArray<ASBZSpline*>& Path, float Distance, FVector Location, FVector ForwardDir, float StepDistance, float MaxDistance, float MaxAngle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void DriveEscapeVan(UObject* WorldContextObject, ESBZTrafficNodeExec& Exec, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AppendEscapeVanRoute(UObject* WorldContextObject, ASBZTrafficSpline* DestinationSpline);
    
};

