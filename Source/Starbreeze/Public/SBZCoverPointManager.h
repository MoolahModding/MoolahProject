#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SBZCoverShootingPoints.h"
#include "SBZCoverPointManager.generated.h"

class AActor;
class ASBZCoverPoint;
class USBZCoverPointManager;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class USBZCoverPointManager : public UObject {
    GENERATED_BODY()
public:
    USBZCoverPointManager();
    UFUNCTION(BlueprintPure)
    TArray<FSBZCoverShootingPoints> GetShootingPoints() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ASBZCoverPoint*> GetCoverWithinBounds(const FBoxSphereBounds& Bounds);
    
    UFUNCTION(BlueprintPure)
    uint8 GetCoverSafeness(const ASBZCoverPoint* CoverPoint, const TArray<AActor*>& Enemies) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZCoverPointManager* Get(UObject* WorldContextObject);
    
};

