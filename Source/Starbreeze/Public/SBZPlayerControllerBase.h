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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPausedPreferred;
    
public:
    ASBZPlayerControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPausedPreferred(bool bIsPaused);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPausedPreferred(bool bInIsPaused);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetLoadout(const FPD3PlayerLoadout& Loadout);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetAccelByteSessionInformation(const FString& InAccelByteUserId, const FString& InSessionId, const ESBZFirstPartyPlatform FirstPartyPlatform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPausedPreferred() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsPaused() const;
    
};

