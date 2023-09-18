#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
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
    ASBZPlayerControllerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetLoadout(const FPD3PlayerLoadout& Loadout);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetAccelByteSessionInformation(const FString& InAccelByteUserId, const FString& InSessionId);
    
};

