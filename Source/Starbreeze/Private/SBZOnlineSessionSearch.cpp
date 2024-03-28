#include "SBZOnlineSessionSearch.h"

USBZOnlineSessionSearch::USBZOnlineSessionSearch() {
    this->GameSearchKeyword = TEXT("SBZ");
    this->bHostPartyByDefault = false;
    this->SBZOnlineSessionUtils = NULL;
    this->SBZOnlineSessionRequestHandler = NULL;
}

