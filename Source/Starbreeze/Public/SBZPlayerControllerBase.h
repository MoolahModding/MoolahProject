#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ESBZFirstPartyPlatform.h"
#include "PD3PlayerLoadout.h"
#include "SBZPlayerControllerBase.generated.h"

class ASBZPlayerState;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZPlayerControllerBase : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* SBZPlayerState;
    
public:
    ASBZPlayerControllerBase();
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetLoadout(const FPD3PlayerLoadout& Loadout);
    
public:
    UFUNCTION(Reliable, Server)
    void Server_SetAccelByteSessionInformation(const FString& InAccelByteUserId, const FString& InSessionId, const ESBZFirstPartyPlatform FirstPartyPlatform);
    
};

