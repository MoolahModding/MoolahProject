#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserRecord.h"
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
    void ResendPlayerLoadoutRequest();
    
    UFUNCTION(BlueprintCallable)
    void OnSaveCurrentLoadoutSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnSaveCurrentLoadoutFailed(int32 Code, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnPartyControlMessageReceived(const FString& Timestamp, const FString& Sender, const FString& Message, const FString& RoomId);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadPlayerLoadoutSuccess(const FAccelByteModelsUserRecord& ModelsUserRecord);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadPlayerLoadoutFailed(int32 Code, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnChatDisconnected();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZPartyMemberDataManager* GetPartyMemberDataManager(const UObject* WorldContextObject);
    
};

