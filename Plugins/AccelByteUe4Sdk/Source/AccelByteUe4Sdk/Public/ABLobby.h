#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DConnectionClosedDelegateDelegate.h"
#include "DDisconnectNotifDelegateDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DRefreshTokenResponseDelegateDelegate.h"
#include "RefreshTokenRequest.h"
#include "RequestDSModel.h"
#include "SetRetryParametersRequest.h"
#include "ABLobby.generated.h"

UCLASS(Blueprintable)
class UABLobby : public UObject {
    GENERATED_BODY()
public:
    UABLobby();
    UFUNCTION(BlueprintCallable)
    void UnbindEvent();
    
    UFUNCTION(BlueprintCallable)
    void SetRetryParameters(const FSetRetryParametersRequest& Request);
    
    UFUNCTION(BlueprintCallable)
    void SetOnErrorNotification(FDErrorHandler OnErrorNotification);
    
    UFUNCTION(BlueprintCallable)
    void SetOnDisconnect(const FDDisconnectNotifDelegate& OnDisconnected);
    
    UFUNCTION(BlueprintCallable)
    void SetOnConnectionClosed(FDConnectionClosedDelegate OnConnectionClosed);
    
    UFUNCTION(BlueprintCallable)
    void SetOnConnectFailed(const FDErrorHandler& OnConnectError);
    
    UFUNCTION(BlueprintCallable)
    void SetOnConnected(FDHandler OnConnected);
    
    UFUNCTION(BlueprintCallable)
    FString RequestDS(const FRequestDSModel& Request);
    
    UFUNCTION(BlueprintCallable)
    FString RefreshToken(const FRefreshTokenRequest& Request, FDRefreshTokenResponseDelegate OnResponse, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    bool IsConnected();
    
    UFUNCTION(BlueprintCallable)
    void Disconnect();
    
    UFUNCTION(BlueprintCallable)
    void Connect();
    
};

