#include "AccelByteServerSettings.h"

UAccelByteServerSettings::UAccelByteServerSettings() {
    this->ForceEnableSettings = false;
    this->ClientId = TEXT("de1a888b2ec84579a3ffe67f1af295b6");
    this->ClientSecret = TEXT("IlA+2hfb4xUuW-1P,WxJp3!d;-fZcrW6");
    this->Namespace = TEXT("pd3");
    this->PublisherNamespace = TEXT("starbreeze");
    this->RedirectURI = TEXT("http://127.0.0.1");
    this->BaseUrl = TEXT("https://development.starbreeze.accelbyte.io");
    this->QosPingTimeout = 0.60f;
    this->AMSHeartbeatInterval = 15;
    this->bSendPredefinedEvent = false;
}


