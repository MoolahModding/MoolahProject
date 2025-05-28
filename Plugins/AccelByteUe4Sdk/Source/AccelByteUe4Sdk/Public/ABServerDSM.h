#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DServerInfoDelegateDelegate.h"
#include "DServerSessionResponseDelegateDelegate.h"
#include "UEnumServerType.h"
#include "ABServerDSM.generated.h"

UCLASS(Blueprintable)
class UABServerDSM : public UObject {
    GENERATED_BODY()
public:
    UABServerDSM();

    UFUNCTION(BlueprintCallable)
    void SetServerType(UEnumServerType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetServerName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetOnAutoShutdownResponse(FDHandler OnAutoShutdown);
    
    UFUNCTION(BlueprintCallable)
    void SetOnAutoShutdownErrorDelegate(FDErrorHandler OnShutdownError);
    
    UFUNCTION(BlueprintCallable)
    void SendShutdownToDSM(const bool& KillMe, const FString& MatchId, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void RegisterServerToDSM(const int32& Port, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLocalServerToDSM(const FString& IPAddress, const int32& Port, const FString& ServerName, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetSessionId(FDServerSessionResponseDelegate OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetServerInfo(FDServerInfoDelegate OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerNum();
    
    UFUNCTION(BlueprintCallable)
    void DeregisterLocalServerFromDSM(const FString& ServerName, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void ConfigureAutoShutdown(int32 TickSeconds, int32 CountdownStart);
    
};

