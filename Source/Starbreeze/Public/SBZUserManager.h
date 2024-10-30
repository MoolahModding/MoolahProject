#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZUserStatus.h"
#include "SBZUser.h"
#include "SBZUserManager.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZUserManager : public UObject {
    GENERATED_BODY()
public:
    USBZUserManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESBZUserStatus GetUserStatus(const UObject* WorldContextObject, const FSBZUser& User);
    
};

