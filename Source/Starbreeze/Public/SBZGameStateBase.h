#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "SBZBuildNumberInterface.h"
#include "SBZGameStateBase.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZGameStateBase : public AGameStateBase, public ISBZBuildNumberInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuildNumber;
    
public:
    ASBZGameStateBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

