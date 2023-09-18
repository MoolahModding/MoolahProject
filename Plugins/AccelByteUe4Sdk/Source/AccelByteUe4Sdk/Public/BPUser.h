#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DPlatformLinksHandlerDelegate.h"
#include "DUserDataHandlerDelegate.h"
#include "DUserEligiblePlayHandlerDelegate.h"
#include "DUserRegisterHandlerDelegate.h"
#include "EAccelBytePlatformType.h"
#include "BPUser.generated.h"

UCLASS(Blueprintable)
class UBPUser : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPUser();

    UFUNCTION(BlueprintCallable)
    static void Verify(const FString& VerificationCode, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void UpgradeAndVerify(const FString& Username, const FString& Password, const FString& VerificationCode, const FDUserDataHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void Upgrade(const FString& Username, const FString& Password, const FDUserDataHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void UnlinkOtherPlatform(EAccelBytePlatformType PlatformType, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void SendVerificationCode(const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void SendUpgradeVerificationCode(const FString& EmailAddress, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void SendResetPasswordCode(const FString& EmailAddress, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void ResetPassword(const FString& VerificationCode, const FString& EmailAddress, const FString& NewPassword, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void Register(const FString& Username, const FString& Password, const FString& DisplayName, const FString& Country, const FString& DateOfBirth, const FDUserRegisterHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void Logout(const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void LoginWithUsername(const FString& Username, const FString& Password, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void LoginWithOtherPlatform(EAccelBytePlatformType PlatformType, const FString& Token, const FDHandler& OnSuccess, const FDErrorHandler& OnError, bool bCreateHeadless);
    
    UFUNCTION(BlueprintCallable)
    static void LoginWithDeviceId(const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void LinkOtherPlatform(EAccelBytePlatformType PlatformType, const FString& Ticket, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserEligibleToPlay(const FDUserEligiblePlayHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void GetPlatformLinks(const FDPlatformLinksHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    static void ForgetAllCredentials();
    
};

