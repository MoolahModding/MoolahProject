#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerStateWidgetBase.h"
#include "SBZPlayerStatePawnWidgetBase.generated.h"

class ASBZPlayerCharacter;

UCLASS(Blueprintable, EditInlineNew)
class USBZPlayerStatePawnWidgetBase : public USBZPlayerStateWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* PlayerCharacter;
    
public:
    USBZPlayerStatePawnWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWidgetPawnLocallyControlled() const;
    
};

