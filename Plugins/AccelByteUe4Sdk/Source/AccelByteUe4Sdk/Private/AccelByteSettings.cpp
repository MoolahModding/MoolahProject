#include "AccelByteSettings.h"

UAccelByteSettings::UAccelByteSettings() {
    this->ClientId = TEXT("0b3bfdf5a25f452fbd33a36133a2deab");
    this->Namespace = TEXT("pd3");
    this->PublisherNamespace = TEXT("starbreeze");
    this->BaseUrl = TEXT("https://nebula.starbreeze.com");
    this->AppId = TEXT("1272080");
    this->QosLatencyPollIntervalSecs = 0.00f;
    this->QosServerLatencyPollIntervalSecs = 0.00f;
    this->QosPingTimeout = 0.60f;
    this->bEnableHttpCache = false;
}


