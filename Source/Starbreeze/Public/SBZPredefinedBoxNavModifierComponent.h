#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NavModifierComponent.h"
#include "SBZPredefinedBoxNavModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZPredefinedBoxNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardOffset;
    
public:
    USBZPredefinedBoxNavModifierComponent();

};

