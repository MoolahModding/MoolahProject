#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZReactionData.h"
#include "SBZReactionDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZReactionDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZReactionData Reaction;
    
    USBZReactionDataComponent();

};

