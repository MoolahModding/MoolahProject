#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZCoverPointContainerInterface.h"
#include "SBZRoomVolumeInterface.h"
#include "SBZAIOrderTargetArea.generated.h"

class ASBZCoverPoint;
class ASBZRoomVolume;
class UBoxComponent;
class USBZAISquad;

UCLASS(Abstract, Blueprintable)
class ASBZAIOrderTargetArea : public AActor, public ISBZCoverPointContainerInterface, public ISBZRoomVolumeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsiderCoversDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZRoomVolume*> RoomVolumes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZAISquad*> AssignedSquads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZCoverPoint*> CachedCoverPoints;
    
public:
    ASBZAIOrderTargetArea(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCoverPoints();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    

    // Fix for true pure virtual functions not being implemented
};

