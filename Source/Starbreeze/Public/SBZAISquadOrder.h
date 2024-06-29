#pragma once
#include "CoreMinimal.h"
#include "SBZAIOrder.h"
#include "SBZAISquadOrder.generated.h"

class APawn;
class USBZAISquad;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USBZAISquadOrder : public USBZAIOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAISquad* OwnerSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> WaitingMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APawn*> IgnoredMembers;
    
public:
    USBZAISquadOrder();

};

