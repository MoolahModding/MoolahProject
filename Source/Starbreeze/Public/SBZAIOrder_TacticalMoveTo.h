#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAISquadOrder.h"
#include "SBZAIOrder_TacticalMoveTo.generated.h"

class APawn;
class ASBZRoomVolume;
class ISBZRoomConnectorInterface;
class USBZRoomConnectorInterface;
class UBehaviorTree;
class UClass;
class UEnvQuery;

UCLASS(Blueprintable, EditInlineNew)
class USBZAIOrder_TacticalMoveTo : public USBZAISquadOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InjectTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* Behaviors[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> PrioTypes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PreStateActions[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> PrioQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrioWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRoomVolume* TargetRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISBZRoomConnectorInterface> TargetConnector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> CompletedMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* TargetEQSQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> AbortedPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxNumTargetRoomPathFailed;
    
public:
    USBZAIOrder_TacticalMoveTo();

};

