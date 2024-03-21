#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZPawnWidget.generated.h"

class ASBZPlayerCharacter;

UCLASS(Blueprintable, EditInlineNew)
class USBZPawnWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* PlayerCharacter;
    
public:
    USBZPawnWidget();
};

