#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZLongNavLinkPlatform.generated.h"

class UBoxComponent;
class UNavModifierComponent;

UCLASS(Blueprintable)
class ASBZLongNavLinkPlatform : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavModifierComponent* NavModifierComponent;
    
    ASBZLongNavLinkPlatform(const FObjectInitializer& ObjectInitializer);

};

