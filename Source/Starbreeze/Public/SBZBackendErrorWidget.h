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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetErrorText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetErrorHeader() const;
    
};

