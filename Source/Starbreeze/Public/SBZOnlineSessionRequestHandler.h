#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOnlineSessionInfo.h"
#include "SBZOnlineSessionRequestHandler.generated.h"

class USBZLobby;
class USBZParty;

UCLASS(Blueprintable, Config=Game)
class STARBREEZE_API USBZOnlineSessionRequestHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZLobby* Lobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZParty* Party;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SessionRequestTimeoutDuration;
    
public:
    USBZOnlineSessionRequestHandler();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOnlineSessionInfo GetSessionInfo() const;
    
};

