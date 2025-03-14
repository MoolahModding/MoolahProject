#pragma once
#include "CoreMinimal.h"
#include "SBZHurtReactionData.h"
#include "SBZMeleeComponent.h"
#include "SBZPlayerMeleeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZPlayerMeleeComponent : public USBZMeleeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionData HeavyHurtReactionData;
    
public:
    USBZPlayerMeleeComponent(const FObjectInitializer& ObjectInitializer);

};

