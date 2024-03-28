#include "SBZLongNavLinkPlatform.h"
#include "Components/BoxComponent.h"
#include "NavModifierComponent.h"

ASBZLongNavLinkPlatform::ASBZLongNavLinkPlatform() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->NavModifierComponent = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifierComponent"));
}

