#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZFriendListEntry.h"
#include "SBZPlatformsBlockedPlayersInfo.h"
#include "SBZBlockedPlayerManager.generated.h"

class USBZBlockedPlayerManager;

UCLASS(Blueprintable)
class STARBREEZE_API USBZBlockedPlayerManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZPlatformsBlockedPlayersInfo PlatformsBlockedPlayersInfo;
    
public:
    USBZBlockedPlayerManager();
private:
    UFUNCTION()
    void XsxBlockListChangeTimer();
    
    UFUNCTION()
    void OnPlatformUserInitialized();
    
    UFUNCTION()
    void OnBlockedPlayersUpdated();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlayerBlocked(const FString& PlayerId) const;
    
    UFUNCTION(BlueprintPure)
    TMap<FString, FSBZFriendListEntry> GetBlockedPlayers() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZBlockedPlayerManager* Get(const UObject* WorldContextObject);
    
};

