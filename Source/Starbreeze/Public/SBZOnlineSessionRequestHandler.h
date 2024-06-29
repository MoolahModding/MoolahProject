#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOnlineSessionInfo.h"
#include "SBZOnlineSessionRequestHandler.generated.h"

class USBZLobby;
class USBZOnlineSession;
class USBZOnlineSessionUtils;
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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOnlineSessionUtils* SBZOnlineSessionUtils;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SessionRequestTimeoutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOnlineSession* SBZOnlineSession;
    
public:
    USBZOnlineSessionRequestHandler();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOnlineSessionInfo GetSessionInfo() const;
    
};

