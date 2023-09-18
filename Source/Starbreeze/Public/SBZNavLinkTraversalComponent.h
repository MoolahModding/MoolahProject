#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZAgilityTraversalTrajectory.h"
#include "SBZNavLinkTraversalComponent.generated.h"

class USBZAgilityTraversalQueryParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZNavLinkTraversalComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAgilityTraversalTrajectory LeftTrajectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAgilityTraversalTrajectory RightTrajectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAgilityTraversalQueryParams* QueryParams;
    
public:
    USBZNavLinkTraversalComponent();

};

