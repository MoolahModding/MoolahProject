#include "SBZBTDecorator_FirePermissionGuard.h"

UDEPRECATED_SBZBTDecorator_FirePermissionGuard::UDEPRECATED_SBZBTDecorator_FirePermissionGuard() {
    this->NodeName = TEXT("FirePermissionGuard");
    this->bClearAllTokens = false;
    this->TokenType = ESBZFireTokenType::Normal;
}


