#pragma once
#include "CoreMinimal.h"
#include "SBZSmartNavLink.h"
#include "SBZTraversalTrajectoryInterface.h"
#include "SBZTraversalNavLink.generated.h"

class USBZNavLinkTraversalComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZTraversalNavLink : public ASBZSmartNavLink, public ISBZTraversalTrajectoryInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZNavLinkTraversalComponent* NavLinkTraversalComponent;
    
public:
    ASBZTraversalNavLink(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

