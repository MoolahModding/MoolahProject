#include "BPUser.h"

void UBPUser::Verify(const FString& VerificationCode, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UBPUser::UpgradeAndVerify(const FString& Username, const FString& Password, const FString& VerificationCode, const FDUserDataHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UBPUser::Upgrade(const FString& Username, const FString& Password, const FDUserDataHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UBPUser::UnlinkOtherPlatformWithCustomErrorHandler(EAccelBytePlatformType PlatformType, const FDHandler& OnSuccess, const FDCustomErrorHandler& OnError) {
}

void UBPUser::UnlinkOtherPlatformId(const FString& PlatformId, const FDHandler& OnSuccess, const FDCustomErrorHandler& OnError) {
}

void UBPUser::UnlinkOtherPlatform(EAccelBytePlatformType PlatformType, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UBPUser::UnlinkAllOtherPlatformId(const FString& PlatformId, const FDHandler& OnSuccess, const FDCustomErrorHandler& OnError) {
}

void UBPUser::UnlinkAllOtherPlatform(EAccelBytePlatformType PlatformType, const FDHandler& OnSuccess, const FDCustomErrorHandler& OnError) {
}

void UBPUser::SendVerificationCode(const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UBPUser::SendUpgradeVerificationCode(const FString& EmailAddress, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UBPUser::SendResetPasswordCode(const FString& EmailAddress, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UBPUser::ResetPassword(const FString& VerificationCode, const FString& EmailAddress, const FString& NewPassword, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UBPUser::Register(const FString& Username, const FString& Password, const FString& DisplayName, const FString& Country, const FString& DateOfBirth, const FDUserRegisterHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UBPUser::Logout(const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UBPUser::LoginWithUsername(const FString& Username, const FString& Password, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UBPUser::LoginWithOtherPlatform(EAccelBytePlatformType PlatformType, const FString& Token, const FDHandler& OnSuccess, const FDErrorHandler& OnError, bool bCreateHeadless) {
}

void UBPUser::LoginWithDeviceId(const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UBPUser::LinkOtherPlatform(EAccelBytePlatformType PlatformType, const FString& Ticket, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UBPUser::GetUserEligibleToPlay(const FDUserEligiblePlayHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UBPUser::GetPlatformLinks(const FDPlatformLinksHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UBPUser::ForgetAllCredentials() {
}

UBPUser::UBPUser() {
}

