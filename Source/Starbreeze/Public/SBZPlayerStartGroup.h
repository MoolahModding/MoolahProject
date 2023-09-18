#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZOnSpawnGroupChosenDelegate.h"
#include "SBZPlayerStartGroup.generated.h"

class APlayerStart;

UCLASS(Blueprintable)
class ASBZPlayerStartGroup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerStart*> PlayerStarts;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnSpawnGroupChosen OnSpawnGroupChosen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ASBZPlayerStartGroup(const FObjectInitializer& ObjectInitializer);

};

