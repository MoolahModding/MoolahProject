#include "SBZInvestigationRequest.h"

FSBZInvestigationRequest::FSBZInvestigationRequest() {
    this->Target = NULL;
    this->Instigator = NULL;
    this->Room = NULL;
    this->Mode = ESBZInvestigationMode::Add;
    this->EscalationReason = NULL;
    this->bIsUrgent = false;
}

