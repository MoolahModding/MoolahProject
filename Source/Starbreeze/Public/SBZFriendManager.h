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
    UFUNCTION()
    void OnUnblockPlayerComplete(bool bResult, FSBZFriendListEntry PlayerEntry);
    
    UFUNCTION()
    void OnPlatformUserInitialized();
    
    UFUNCTION()
    void OnBlockPlayerComplete(bool bResult, FSBZFriendListEntry PlayerEntry);
    
    UFUNCTION()
    void OnBlockedPlayerChanged();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlayingOnSamePlatform(const FSBZFriendListEntry& FriendEntry) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCrossplayAllowed() const;
    
    UFUNCTION()
    void HandleUIStackChanged(FSBZUIStackChangedEvent Event);
    
private:
    UFUNCTION()
    void HandleStateEntered(FName StateName);
    
public:
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
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZFriendManager* GetFriendManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FSBZFriendListEntry> GetBlockedPlayerEntries();
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, FSBZFriendListEntry> GetAccelByteFriendEntries();
    
};

