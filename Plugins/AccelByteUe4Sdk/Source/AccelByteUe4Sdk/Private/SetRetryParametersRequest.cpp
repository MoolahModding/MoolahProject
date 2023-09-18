#include "SetRetryParametersRequest.h"

FSetRetryParametersRequest::FSetRetryParametersRequest() {
    this->NewTotalTimeout = 0;
    this->NewBackoffDelay = 0;
    this->NewMaxDelay = 0;
}

