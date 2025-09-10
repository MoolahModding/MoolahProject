#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZQueuedJoinLobby.h"
#include "SBZMatchmaking.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZMatchmaking : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZQueuedJoinLobby QueuedJoinLobby;
    
public:
    USBZMatchmaking();

};

