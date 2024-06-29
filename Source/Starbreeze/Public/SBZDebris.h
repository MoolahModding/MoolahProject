#pragma once
#include "CoreMinimal.h"
#include "SBZBaseDebris.h"
#include "SBZDebris.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASBZDebris : public ASBZBaseDebris {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    ASBZDebris(const FObjectInitializer& ObjectInitializer);

};

