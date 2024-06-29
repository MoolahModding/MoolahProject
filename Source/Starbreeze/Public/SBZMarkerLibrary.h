#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZMarkerLibrary.generated.h"

class UObject;
class USBZMarkerDataAsset;
class USceneComponent;

UCLASS(Blueprintable)
class USBZMarkerLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZMarkerLibrary();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveReplicatedMarker(UObject* WorldContextObject, int32 ID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveLocalMarker(UObject* WorldContextObject, int32 ID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddReplicatedMarker(UObject* WorldContextObject, USBZMarkerDataAsset* MarkerDataAsset, const FVector Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddLocalMarker(UObject* WorldContextObject, USBZMarkerDataAsset* MarkerDataAsset, const FVector Translation, USceneComponent* Component, FName SocketName);
    
};

