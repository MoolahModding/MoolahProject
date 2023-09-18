#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZReactionData.h"
#include "SBZReactionDataInterface.generated.h"

UINTERFACE()
class USBZReactionDataInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZReactionDataInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual FSBZReactionData GetReactionData() PURE_VIRTUAL(GetReactionData, return FSBZReactionData{};);
    
};

