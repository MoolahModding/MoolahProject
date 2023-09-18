#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "SBZConfigRepClass.h"
#include "SBZReplicationGraph.generated.h"

class AActor;
class UClass;
class UReplicationGraphNode_ActorList;
class UReplicationGraphNode_DynamicSpatialFrequency;
class UReplicationGraphNode_GridSpatialization2D;
class USBZReplicationGraphNode_InitialFrameReplication;
class USBZReplicationGraphNode_PrototypingOnly;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API USBZReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_GridSpatialization2D* GridNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZReplicationGraphNode_PrototypingOnly* PrototypeNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_ActorList* AlwaysRelevantNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplicationGraphNode_DynamicSpatialFrequency* DynamicSpatialFrequencyNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZReplicationGraphNode_InitialFrameReplication* IntialFrameReplicationNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UClass*> NonSpatializedChildClasses;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZConfigRepClass> ConfigRepClasses;
    
public:
    USBZReplicationGraph();

    UFUNCTION(BlueprintCallable)
    void OnActorDependencyRemoved(AActor* Master, AActor* Slave);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDependencyAdded(AActor* Master, AActor* Slave);
    
};

