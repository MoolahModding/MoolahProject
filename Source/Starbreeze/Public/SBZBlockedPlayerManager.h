#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
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
    UFUNCTION(BlueprintCallable)
    void OnPlatformUserInitialized();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchInfoUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnBlockedPlayersUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerBlocked(const FString& PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZBlockedPlayerManager* Get(const UObject* WorldContextObject);
    
};

