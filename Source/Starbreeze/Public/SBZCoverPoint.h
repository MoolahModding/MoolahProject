#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ESBZAIVisibilityNodeComputationFrequency.h"
#include "ESBZShootingPointType.h"
#include "SBZAIVisibilityLeafNode.h"
#include "SBZAIVisibilityRelevant.h"
#include "SBZAIVisibilitySerializablePayload.h"
#include "SBZCoverShootingPointAiVisibilityInfo.h"
#include "SBZCoverShootingPoints.h"
#include "SBZRoomVolumeInterface.h"
#include "SBZCoverPoint.generated.h"

class APawn;
class ASBZCoverPoint;
class ASBZRoomVolume;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZCoverPoint : public AActor, public ISBZAIVisibilityRelevant, public ISBZRoomVolumeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASBZCoverPoint>> LinkedCoverPoints;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASBZCoverPoint>> ManualLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BlockingCollision;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIVisibilitySerializablePayload AIVisibilityPayload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZAIVisibilityLeafNode AIVisibilityNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAIVisibilityNodeComputationFrequency AIVisibilityNodeComputationFrequency;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> BlockingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> OverlappingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZCoverShootingPointAiVisibilityInfo> ShootingPointsVisibilityInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* CurrentRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ValidShootingPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bManualRegistering: 1;
    
public:
    ASBZCoverPoint();
    UFUNCTION(BlueprintCallable)
    bool Reserve(AActor* ForActor);
    
    UFUNCTION()
    void OnOccupantKilled(APawn* Pawn);
    
    UFUNCTION()
    void OnBlockerKilled(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    bool Occupy(AActor* OccupyingActor);
    
    UFUNCTION(BlueprintPure)
    bool IsStandingCover() const;
    
    UFUNCTION(BlueprintPure)
    bool IsReserved(AActor* ForActor) const;
    
    UFUNCTION(BlueprintPure)
    bool IsRegistered() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOccupied() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLowCover() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFree(AActor* ForActor) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCrouchingCover() const;
    
    UFUNCTION(BlueprintPure)
    bool IsComputed() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBlockedBy(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    bool IsBlocked(AActor* ForActor) const;
    
    UFUNCTION(BlueprintPure)
    bool HasShootingPointLOS_Synchronously(ESBZShootingPointType ShootingPoint, AActor* TargetActor) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyShootingPointLOS_Synchronously(AActor* TargetActor) const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetValidShootingPoints() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetReservedForActor() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOccupant() const;
    
    UFUNCTION(BlueprintCallable)
    void ComputeValidShootingPoints(const TArray<FSBZCoverShootingPoints>& ShootingPoints, bool bUseAIVisibilityPayloadCenterAsLocation);
    
    UFUNCTION(BlueprintCallable)
    void CancelReservation(AActor* ForActor);
    
protected:
    UFUNCTION()
    void BlockingActorLeft(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void BlockingActorEntered(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    bool Abandon(AActor* OccupyingActor);
    
    
    // Fix for true pure virtual functions not being implemented
};

