#include "SBZPartyInvitation.h"

FSBZPartyInvitation::FSBZPartyInvitation() {
    this->Type = ESBZPartyInvitationType::Incoming;
    this->System = ESBZPartyInvitationSystem::Accelbyte;
    this->Status = ESBZPartyInviteStatus::Pending;
}

