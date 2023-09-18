#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAccelByteUser.generated.h"

UCLASS(Blueprintable)
class USBZAccelByteUser : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Country;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString City;
    
public:
    USBZAccelByteUser();

};

