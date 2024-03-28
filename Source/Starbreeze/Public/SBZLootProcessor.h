#pragma once
#include "CoreMinimal.h"
#include "SBZLootProcessorBase.h"
#include "SBZLootProcessor.generated.h"

UCLASS(Blueprintable)
class ASBZLootProcessor : public ASBZLootProcessorBase {
    GENERATED_BODY()
public:
    ASBZLootProcessor();
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnTrayOpened();
    
};

