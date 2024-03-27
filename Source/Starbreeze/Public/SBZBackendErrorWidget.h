#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZBackendErrorWidget.generated.h"

class UStringTable;

UCLASS(Blueprintable, EditInlineNew)
class USBZBackendErrorWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* ErrorMessageStringTable;
    
public:
    USBZBackendErrorWidget();
    UFUNCTION(BlueprintPure)
    FText GetErrorText() const;
    
    UFUNCTION(BlueprintPure)
    FText GetErrorHeader() const;
    
};

