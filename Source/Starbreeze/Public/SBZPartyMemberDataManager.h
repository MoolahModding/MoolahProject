#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZPartyMemberDataManager.generated.h"

class USBZPartyMemberDataManager;

UCLASS(Blueprintable)
class USBZPartyMemberDataManager : public UObject {
    GENERATED_BODY()
public:
    USBZPartyMemberDataManager();

private:
    UFUNCTION(BlueprintCallable)
    void SendNextChunkTimeout();
    
    UFUNCTION(BlueprintCallable)
    void ResendPlayerLoadoutRequest();
    
    UFUNCTION(BlueprintCallable)
    void OnPartyControlMessageReceived(const FString& Timestamp, const FString& Sender, const FString& Message, const FString& RoomId);
    
    UFUNCTION(BlueprintCallable)
    void OnChatDisconnected();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZPartyMemberDataManager* GetPartyMemberDataManager(const UObject* WorldContextObject);
    
};

