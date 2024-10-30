#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ColliderDataContainer.h"
#include "EAIObjectiveInteractionTypes.h"
#include "EAIObjectivePriority.h"
#include "InteractableDataContainer.h"
#include "SBZAIObjectiveInterface.h"
#include "SBZRoomVolumeInterface.h"
#include "SBZAIObjectiveComponent.generated.h"

class APawn;
class ASBZAIController;
class ASBZRoomVolume;
class UEnvQuery;
class UPrimitiveComponent;
class USBZAIOrder;
class USBZBaseInteractableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIObjectiveComponent : public UActorComponent, public ISBZAIObjectiveInterface, public ISBZRoomVolumeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterToWorldRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExcludeInteractableAfterUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIObjectiveInteractionTypes InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIObjectivePriority InteractionPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZAIController> CurrentUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInteractableDataContainer> ObjectiveInteractables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ActiveInteractables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> InteractableExclusionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FColliderDataContainer> ObjectiveColliders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ActiveColliders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector InteractionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MoveToPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector InitialObjectiveLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZRoomVolume*> RoomVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* LastKnownRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnvQuery* MoveToPosEQSQuery;
    
public:
    USBZAIObjectiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnOrderCompleted(USBZAIOrder* Order, APawn* Owner, TEnumAsByte<EBTNodeResult::Type> OrderResult);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractStateChanged(const USBZBaseInteractableComponent* Interactable, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionChanged(UPrimitiveComponent* ActorPrimitive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZRoomVolume* GetLastKnownRoom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZRoomVolume* GetCurrentRoom_Implementation() const;
    

    // Fix for true pure virtual functions not being implemented
};

