#include "SBZVoiceSessionData.h"

FSBZVoiceSessionData::FSBZVoiceSessionData() {
    this->Domain = ESBZVoiceSessionDomain::Default;
    this->State = ETLMVoiceSessionState::ToCreate;
}

