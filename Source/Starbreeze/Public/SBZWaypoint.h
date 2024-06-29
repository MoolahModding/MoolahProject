#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZWaypoint.generated.h"

class USBZMarkerDataAsset;

UCLASS(Blueprintable)
class ASBZWaypoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMarkerOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* MarkerAsset;
    
public:
    ASBZWaypoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveMarker();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddMarker();
    
};

