#include "AccelByteServerSettings.h"

UAccelByteServerSettings::UAccelByteServerSettings() {
    this->ForceEnableSettings = false;
    this->ClientId = TEXT("121f07b3990a49c384942e372a500c3b");
    this->ClientSecret = TEXT("YMs]DKN8-Z4CbudBB8_1RRtcT4Me%(7O");
    this->Namespace = TEXT("pd3");
    this->PublisherNamespace = TEXT("starbreeze");
    this->RedirectURI = TEXT("http://127.0.0.1");
    this->BaseUrl = TEXT("https://development.starbreeze.accelbyte.io");
    this->QosPingTimeout = 0.60f;
    this->AMSHeartbeatInterval = 15;
    this->bSendPredefinedEvent = false;
}

