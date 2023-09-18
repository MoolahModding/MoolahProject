#include "AkWaapiCalls.h"

UAkWaapiCalls::UAkWaapiCalls() {
}

FAKWaapiJsonObject UAkWaapiCalls::Unsubscribe(const FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone) {
    return FAKWaapiJsonObject{};
}

FAKWaapiJsonObject UAkWaapiCalls::SubscribeToWaapi(const FAkWaapiUri& WaapiUri, const FAKWaapiJsonObject& WaapiOptions, const FOnEventCallback& CallBack, FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone) {
    return FAKWaapiJsonObject{};
}

void UAkWaapiCalls::SetSubscriptionID(const FAkWaapiSubscriptionId& Subscription, int32 id) {
}

bool UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(const FOnWaapiProjectLoaded& Callback) {
    return false;
}

bool UAkWaapiCalls::RegisterWaapiConnectionLostCallback(const FOnWaapiConnectionLost& Callback) {
    return false;
}

int32 UAkWaapiCalls::GetSubscriptionID(const FAkWaapiSubscriptionId& Subscription) {
    return 0;
}

FText UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(const FAkWaapiSubscriptionId& INAkWaapiSubscriptionId) {
    return FText::GetEmpty();
}

FString UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(const FAkWaapiSubscriptionId& INAkWaapiSubscriptionId) {
    return TEXT("");
}

FAKWaapiJsonObject UAkWaapiCalls::CallWaapi(const FAkWaapiUri& WaapiUri, const FAKWaapiJsonObject& WaapiArgs, const FAKWaapiJsonObject& WaapiOptions) {
    return FAKWaapiJsonObject{};
}


