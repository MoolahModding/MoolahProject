#pragma once
#include "CoreMinimal.h"
#include "SBZAccelByteUser.h"
#include "SBZAccelByteUserImplentation.generated.h"

UCLASS(Blueprintable)
class USBZAccelByteUserImplentation : public USBZAccelByteUser {
    GENERATED_BODY()
public:
    USBZAccelByteUserImplentation();
private:
    UFUNCTION()
    void HandlePlatformUserChanged(int32 OldUserIndex);
    
};

