#pragma once
#include "CoreMinimal.h"
#include "SBZSpecialAIComponent.h"
#include "SBZAIShieldSpecialComponent.generated.h"

class ASBZAIShieldCoverAttachPoint;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZAIShieldSpecialComponent : public USBZSpecialAIComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumberOfSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpaceBetweenSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZAIShieldCoverAttachPoint*> CoverAttachPoints;
    
public:
    USBZAIShieldSpecialComponent(const FObjectInitializer& ObjectInitializer);

};

