#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBZAIVisibilityLeafNode.h"
#include "SBZCoverPointVisibilityCheckData.h"
#include "SBZAIVisibilityManager.generated.h"

class ASBZAIVisibilityManager;
class ASBZCharacter;
class ASBZCoverPoint;
class ISBZAIVisibilityRelevant;
class USBZAIVisibilityRelevant;
class UObject;
class USBZAIVisibilityComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAIVisibilityManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxComputedNodePerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxComputedCoverPointVisibilityPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistFromObstacleToBeStandCovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistFromObstacleToBeCrouchCovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistFromEnemyToBeCrouchCovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistFromEnemyToBeStandCovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIVisibilityComponent* VisibilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AIVisibilityRelevantActorsEveryFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AIVisibilityRelevantActorsAutomatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, TScriptInterface<ISBZAIVisibilityRelevant>> AIVisibilityRelevants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AIVisibilityRelevantActorsToRefreshAfterUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ASBZCharacter*, FSBZCoverPointVisibilityCheckData> CoverPointVisibilityChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZAIVisibilityComponent*> RandomSublevelVisComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<USBZAIVisibilityComponent*, FTransform> RSLVisComponentTransforms;
    
public:
    ASBZAIVisibilityManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterVisibilityComponent(USBZAIVisibilityComponent* InVisibilityComponent);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterRelevantAIVisibilityActor(AActor* AIVisibilityRelevantActor);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterRandomSublevelVisComponent(USBZAIVisibilityComponent* InRandomSublevelVisComponent);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterCoverPointVisibilityCheck(ASBZCharacter* Caller);
    
    UFUNCTION(BlueprintCallable)
    void RegisterVisibilityComponent(USBZAIVisibilityComponent* InVisibilityComponent);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterRelevantAIVisibilityActor(AActor* AIVisibilityRelevantActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterRandomSublevelVisComponent(USBZAIVisibilityComponent* InRandomSublevelVisComponent);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCoverPointVisibilityCheck(ASBZCharacter* Caller, ASBZCoverPoint* CoverPoint, const TArray<AActor*>& Enemies, uint8 Score);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void RateTargetLocation(const AActor* Observer, const FVector& StartLocation, const FVector& TargetLocation, const float MaxRelevantDist, const float EnemyExcluderRadius, const float RejectingHeightDiffBetweenNodeAndTarget, uint8& OutVisibilityScore, uint8& OutDistanceScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNodeVisibleFromLocation(const FSBZAIVisibilityLeafNode& LeafNode, const FVector& Location, const FVector& ObserverLocation, FVector& OutAdjustedLocation, uint8& OutScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNodeVisibleFromActor(const FSBZAIVisibilityLeafNode& LeafNode, const FVector& Location, const AActor* ActorObserver, FVector& OutAdjustedLocation, uint8& OutScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNodeSafeFromLocation(const FSBZAIVisibilityLeafNode& LeafNode, const FVector& Location, const FVector& ObserverLocation, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNodeSafeFromActor(const FSBZAIVisibilityLeafNode& LeafNode, const FVector& Location, const AActor* ActorObserver, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationVisibleFromLocation(const FVector& Location, const FVector& ObserverLocation, FVector& OutAdjustedLocation, uint8& OutScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationSafeFromLocation(const FVector& Location, const FVector& ObserverLocation, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAIVisibilityRelevantSafeFromAIVisibility(const TScriptInterface<ISBZAIVisibilityRelevant> AIVisibilityRelevant, const TScriptInterface<ISBZAIVisibilityRelevant> ObserverAIVisibilityRelevant, uint8& OutSafeStances, FVector& OutAdjustedLocation, uint8& OutScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVisibilityData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZAIVisibilityLeafNode GetAiVisibilityNode(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZAIVisibilityManager* GetAIVisibilityManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool DebugLocation(const UObject* WorldContextObject, const FVector& Location, const bool bDrawAzymuts) const;
    
};

