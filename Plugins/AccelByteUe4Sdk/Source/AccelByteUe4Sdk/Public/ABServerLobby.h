#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DDataPartyResponseDelegateDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DListBlockedUserResponseDelegateDelegate.h"
#include "DListBlockerResponseDelegateDelegate.h"
#include "DPartyDataNotifDelegateDelegate.h"
#include "DPayloadModifierDelegate.h"
#include "DSessionAttributeAllResponseDelegateDelegate.h"
#include "DSessionAttributeResponseDelegateDelegate.h"
#include "ABServerLobby.generated.h"

UCLASS(Blueprintable)
class UABServerLobby : public UObject {
    GENERATED_BODY()
public:
    UABServerLobby();
    UFUNCTION(BlueprintCallable)
    void WritePartyStorage(const FString& PartyId, FDPayloadModifier PayloadModifier, const int32& RetryAttempt, FDPartyDataNotifDelegate OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SetSessionAttributeString(const FString& UserId, const FString& Key, const FString& Value, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SetSessionAttribute(const FString& UserId, const TMap<FString, FString>& Attributes, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetSessionAttributeAll(const FString& UserId, FDSessionAttributeAllResponseDelegate OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetSessionAttribute(const FString& UserId, const FString& Key, FDSessionAttributeResponseDelegate OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetPartyStorage(const FString& PartyId, FDPartyDataNotifDelegate OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetPartyDataByUserId(const FString& UserId, FDDataPartyResponseDelegate OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetListOfBlockers(const FString& UserId, FDListBlockerResponseDelegate OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetListOfBlockedUsers(const FString& UserId, FDListBlockedUserResponseDelegate OnSuccess, FDErrorHandler OnError);
    
};

