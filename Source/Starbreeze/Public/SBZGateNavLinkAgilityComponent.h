#pragma once
#include "CoreMinimal.h"
#include "SBZNavLinkAgilityComponent.h"
#include "SBZGateNavLinkAgilityComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, HideDropdown, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZGateNavLinkAgilityComponent : public USBZNavLinkAgilityComponent {
    GENERATED_BODY()
public:
    USBZGateNavLinkAgilityComponent();

};

