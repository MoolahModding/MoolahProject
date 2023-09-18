#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZSpawnClosetReactorInterface.generated.h"

UINTERFACE(Blueprintable)
class USBZSpawnClosetReactorInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZSpawnClosetReactorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReactToCloset(bool bActorsInCloset, bool bDoCosmetics);
    
};

