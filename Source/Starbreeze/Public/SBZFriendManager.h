#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZFriendListEntry.h"
#include "SBZUIStackChangedEvent.h"
#include "SBZFriendManager.generated.h"

class USBZFriendManager;

UCLASS(Blueprintable)
class USBZFriendManager : public UObject {
    GENERATED_BODY()
public:
    USBZFriendManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnUnblockPlayerComplete(bool bResult, FSBZFriendListEntry PlayerEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnQueryBlockedPlayersDone();
    
    UFUNCTION(BlueprintCallable)
    void OnPlatformUserInitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnBlockPlayerComplete(bool bResult, FSBZFriendListEntry PlayerEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnBlockedPlayerChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingOnSamePlatform(const FSBZFriendListEntry& FriendEntry) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrossplayAllowed() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleUIStackChanged(FSBZUIStackChangedEvent Event);
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FSBZFriendListEntry> GetUserSearchEntries();
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FSBZFriendListEntry> GetPlatformFriendEntries();
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FSBZFriendListEntry> GetOutgoingFriendRequests();
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FSBZFriendListEntry> GetOfflineFriendEntries();
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FSBZFriendListEntry> GetIncomingFriendRequests();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZFriendManager* GetFriendManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FSBZFriendListEntry> GetBlockedPlayerEntries();
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FSBZFriendListEntry> GetAccelByteFriendEntries();
    
};

