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

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLobbyHost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLobbyClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInParty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionPhaseHost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionPhaseClient() const;
    
};

