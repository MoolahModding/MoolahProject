#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZEditVariationSetData.h"
#include "SBZVariationEditComponent.generated.h"

class USBZVariationSetData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZVariationEditComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZVariationSetData* VariationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZEditVariationSetData EditVariationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentVariationIdx;
    
    USBZVariationEditComponent();

};

