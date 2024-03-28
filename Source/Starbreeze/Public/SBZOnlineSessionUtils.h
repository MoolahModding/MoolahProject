#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZOnlineSessionUtils.generated.h"

class USBZLobby;
class USBZPartyManager;

UCLASS(Blueprintable, Config=Game)
class STARBREEZE_API USBZOnlineSessionUtils : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPartyManager* Party;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZLobby* Lobby;
    
    USBZOnlineSessionUtils();
    UFUNCTION(BlueprintPure)
    bool IsPartyOwner() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPartyClient() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLobbyHost() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLobbyClient() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInSession() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInParty() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActionPhaseHost() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActionPhaseClient() const;
    
};

