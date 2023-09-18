#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "SBZGameSessionBase.generated.h"

UCLASS(Blueprintable)
class SBZUTILITYPLUGIN_API ASBZGameSessionBase : public AGameSession {
    GENERATED_BODY()
public:
    ASBZGameSessionBase(const FObjectInitializer& ObjectInitializer);

};

