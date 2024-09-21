#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZUpdatePSOProgressDelegateDelegate.h"
#include "SBZPSOCompilationScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZPSOCompilationScreen : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZUpdatePSOProgressDelegate OnPSOProgressUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateIntervalInSeconds;
    
public:
    USBZPSOCompilationScreen();

};

