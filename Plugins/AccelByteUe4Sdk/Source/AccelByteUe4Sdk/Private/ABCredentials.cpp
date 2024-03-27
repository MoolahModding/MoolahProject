#include "ABCredentials.h"

void UABCredentials::SetUserEmailAddress(const FString& EmailAddress) {
}

void UABCredentials::SetErrorOAuth(FErrorOAuthInfo ErrorOAuthInfo) {
}

void UABCredentials::SetClientCredentials(ESettingsEnvironment Environment) {
}

void UABCredentials::SetAuthToken(FOauth2Token NewAuthToken, float CurrentTime) {
}

void UABCredentials::SetAccountUserData(FAccountUserData InAccountUserData) {
}

void UABCredentials::ScheduleRefreshToken(float NextRefreshTime) {
}

void UABCredentials::PollRefreshToken(float CurrentTime) {
}

bool UABCredentials::IsSessionValid() {
    return false;
}

bool UABCredentials::IsComply() {
    return false;
}

FString UABCredentials::GetUserId() {
    return TEXT("");
}

FString UABCredentials::GetUserEmailAddress() {
    return TEXT("");
}

FString UABCredentials::GetUserDisplayName() {
    return TEXT("");
}

FString UABCredentials::GetRefreshToken() {
    return TEXT("");
}

FString UABCredentials::GetPlatformUserId() {
    return TEXT("");
}

FString UABCredentials::GetNamespace() {
    return TEXT("");
}

FString UABCredentials::GetLinkingToken() {
    return TEXT("");
}

FOauth2Token UABCredentials::GetAuthToken() {
    return FOauth2Token{};
}

FAccountUserData UABCredentials::GetAccountUserData() {
    return FAccountUserData{};
}

FString UABCredentials::GetAccessToken() {
    return TEXT("");
}

void UABCredentials::ForgetAll() {
}

UABCredentials::UABCredentials() {
}

