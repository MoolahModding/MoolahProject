#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SBZGameModeBase.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, NonTransient)
class SBZUTILITYPLUGIN_API ASBZGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SeamlessActors;
    
public:
    ASBZGameModeBase(const FObjectInitializer& ObjectInitializer);

};

