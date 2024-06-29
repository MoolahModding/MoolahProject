#include "SBZLongNavLink.h"
#include "NavAreas/NavArea_Default.h"
#include "Templates/SubclassOf.h"

ASBZLongNavLink::ASBZLongNavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PointLinks.AddDefaulted(1);
    this->NavArea = UNavArea_Default::StaticClass();
    this->PlatformNavArea = UNavArea_Default::StaticClass();
    this->Direction = ENavLinkDirection::BothWays;
    this->StartNavLink = NULL;
    this->EndNavLink = NULL;
}

void ASBZLongNavLink::SetPlatformNavArea(TSubclassOf<UNavArea> AreaClass) {
}

void ASBZLongNavLink::SetNavArea(TSubclassOf<UNavArea> AreaClass) {
}

void ASBZLongNavLink::SetLinkEnabled(bool bInLinkEnabled) {
}

void ASBZLongNavLink::OnSmartLinkReached(AActor* MovingActor, const FVector& DestinationPoint) {
}


