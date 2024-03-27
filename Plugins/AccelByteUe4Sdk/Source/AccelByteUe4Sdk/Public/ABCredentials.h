#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccountUserData.h"
#include "ESettingsEnvironment.h"
#include "ErrorOAuthInfo.h"
#include "Oauth2Token.h"
#include "ABCredentials.generated.h"

UCLASS(Blueprintable)
class ACCELBYTEUE4SDK_API UABCredentials : public UObject {
    GENERATED_BODY()
public:
    UABCredentials();
    UFUNCTION(BlueprintCallable)
    void SetUserEmailAddress(const FString& EmailAddress);
    
    UFUNCTION(BlueprintCallable)
    void SetErrorOAuth(FErrorOAuthInfo ErrorOAuthInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetClientCredentials(ESettingsEnvironment Environment);
    
    UFUNCTION(BlueprintCallable)
    void SetAuthToken(FOauth2Token NewAuthToken, float CurrentTime);
    
    UFUNCTION(BlueprintCallable)
    void SetAccountUserData(FAccountUserData InAccountUserData);
    
    UFUNCTION(BlueprintCallable)
    void ScheduleRefreshToken(float NextRefreshTime);
    
    UFUNCTION(BlueprintCallable)
    void PollRefreshToken(float CurrentTime);
    
    UFUNCTION(BlueprintCallable)
    bool IsSessionValid();
    
    UFUNCTION(BlueprintCallable)
    bool IsComply();
    
    UFUNCTION(BlueprintCallable)
    FString GetUserId();
    
    UFUNCTION(BlueprintCallable)
    FString GetUserEmailAddress();
    
    UFUNCTION(BlueprintCallable)
    FString GetUserDisplayName();
    
    UFUNCTION(BlueprintCallable)
    FString GetRefreshToken();
    
    UFUNCTION(BlueprintCallable)
    FString GetPlatformUserId();
    
    UFUNCTION(BlueprintCallable)
    FString GetNamespace();
    
    UFUNCTION(BlueprintCallable)
    FString GetLinkingToken();
    
    UFUNCTION(BlueprintCallable)
    FOauth2Token GetAuthToken();
    
    UFUNCTION(BlueprintCallable)
    FAccountUserData GetAccountUserData();
    
    UFUNCTION(BlueprintCallable)
    FString GetAccessToken();
    
    UFUNCTION(BlueprintCallable)
    void ForgetAll();
    
};

