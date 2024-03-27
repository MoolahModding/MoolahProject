#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnLobbyEventDelegateDelegate.h"
#include "SBZLobbyCharacterInfoUi.h"
#include "SBZLobbyLocalState.generated.h"

class UTexture2D;

UCLASS(Blueprintable, NotPlaceable, Transient)
class STARBREEZE_API USBZLobbyLocalState : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyEventDelegate OnPlayerCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyEventDelegate OnSomeoneAcceptedMatch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyEventDelegate OnPlayerLeftMatch;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZLobbyCharacterInfoUi> PlayerInfos;
    
public:
    USBZLobbyLocalState();
protected:
    UFUNCTION()
    void SendInfoToServer();
    
    UFUNCTION()
    void HandleGameStateLeft(FName StateName);
    
    UFUNCTION()
    void HandleGameStateEnter(FName StateName);
    
public:
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetPlayerAvatar(int32 PlayerIndex);
    
};

