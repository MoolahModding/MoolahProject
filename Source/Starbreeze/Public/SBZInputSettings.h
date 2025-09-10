#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/PlayerInput.h"
#include "SBZInputSettings.generated.h"

UCLASS(Blueprintable, Config=Input)
class USBZInputSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> TransientActionMappingArray;
    
public:
    USBZInputSettings();

};

