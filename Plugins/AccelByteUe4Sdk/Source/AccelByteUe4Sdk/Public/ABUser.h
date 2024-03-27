#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DAccountLinkConflictErrorJsonResponseDelegate.h"
#include "DAccountUserDataResponseDelegate.h"
#include "DBooleanResponseDelegate.h"
#include "DBulkPlatformUserIdResponseDelegate.h"
#include "DCountryInfoResponseDelegate.h"
#include "DCustomErrorHandlerDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DListBulkUserInfoResponseDelegate.h"
#include "DPagedPlatformLinksResponseDelegate.h"
#include "DPagedPublicUsersInfoResponseDelegate.h"
#include "DRegisterResponseDelegate.h"
#include "DSimpleUserDataResponseDelegate.h"
#include "EAccelBytePlatformType.h"
#include "EAccelByteSearchType.h"
#include "RegisterRequestv3.h"
#include "UpdateEmailRequest.h"
#include "UserUpdateRequest.h"
#include "ABUser.generated.h"

UCLASS(Blueprintable)
class UABUser : public UObject {
    GENERATED_BODY()
public:
    UABUser();
    UFUNCTION(BlueprintCallable)
    void Verify(const FString& VerificationCode, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void Upgradev2(const FString& EmailAddress, const FString& Username, const FString& Password, FDAccountUserDataResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpgradeAndVerify(const FString& Username, const FString& Password, const FString& VerificationCode, FDAccountUserDataResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void Upgrade(const FString& Username, const FString& Password, FDAccountUserDataResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateUser(FUserUpdateRequest UpdateRequest, FDAccountUserDataResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEmail(FUpdateEmailRequest UpdateEmailRequest, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void UnlinkOtherPlatformWithCustomErrorHandler(EAccelBytePlatformType PlatformType, FDHandler OnSuccess, FDCustomErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void UnlinkOtherPlatformId(const FString& PlatformId, FDHandler OnSuccess, FDCustomErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void UnlinkOtherPlatform(EAccelBytePlatformType PlatformType, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void UnlinkAllOtherPlatformId(const FString& PlatformId, FDHandler OnSuccess, FDCustomErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void UnlinkAllOtherPlatform(EAccelBytePlatformType PlatformType, FDHandler OnSuccess, FDCustomErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void TryRelogin(const FString& PlatformUserID, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SendVerificationCode(FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SendUpgradeVerificationCode(const FString& EmailAddress, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SendUpdateEmailVerificationCode(FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SendResetPasswordCode(const FString& EmailAddress, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SearchUsersByType(const FString& Query, EAccelByteSearchType By, FDPagedPublicUsersInfoResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void SearchUsers(const FString& Query, FDPagedPublicUsersInfoResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void ResetPassword(const FString& VerificationCode, const FString& EmailAddress, const FString& NewPassword, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void Registerv3(const FRegisterRequestv3& RegisterRequest, FDRegisterResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void Registerv2(const FString& EmailAddress, const FString& Username, const FString& Password, const FString& DisplayName, const FString& Country, const FString& DateOfBirth, FDRegisterResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void Register(const FString& Username, const FString& Password, const FString& DisplayName, const FString& Country, const FString& DateOfBirth, FDRegisterResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void Logout(FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void LoginWithUsername(const FString& Username, const FString& Password, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void LoginWithRefreshToken(FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void LoginWithOtherPlatformId(const FString& PlatformId, const FString& PlatformToken, FDHandler OnSuccess, FDErrorHandler OnError, bool bCreateHeadless);
    
    UFUNCTION(BlueprintCallable)
    void LoginWithOtherPlatform(EAccelBytePlatformType PlatformType, const FString& PlatformToken, FDHandler OnSuccess, FDErrorHandler OnError, bool bCreateHeadless);
    
    UFUNCTION(BlueprintCallable)
    void LoginWithLauncher(FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void LoginWithDeviceId(FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void LoginByExchangeCodeForToken(const FString& Code, FDHandler OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void LinkOtherPlatform(EAccelBytePlatformType PlatformType, const FString& Ticket, FDHandler OnSuccess, FDAccountLinkConflictErrorJsonResponse OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserEligibleToPlay(FDBooleanResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserByUserId(const FString& UserId, FDSimpleUserDataResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserByOtherPlatformUserId(EAccelBytePlatformType PlatformType, const FString& OtherPlatformUserId, FDAccountUserDataResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetPlatformLinks(FDPagedPlatformLinksResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetData(FDAccountUserDataResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetCountryFromIP(FDCountryInfoResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void ForgetAllCredentials();
    
    UFUNCTION(BlueprintCallable)
    void ForcedLinkOtherPlatform(EAccelBytePlatformType PlatformType, const FString& PlatformUserId, FDHandler OnSuccess, FDAccountLinkConflictErrorJsonResponse OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkGetUserInfo(const TArray<FString>& UserIds, FDListBulkUserInfoResponse OnSuccess, FDErrorHandler OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkGetUserByOtherPlatformUserIds(EAccelBytePlatformType PlatformType, const TArray<FString>& OtherPlatformUserId, FDBulkPlatformUserIdResponse OnSuccess, FDErrorHandler OnError);
    
};

