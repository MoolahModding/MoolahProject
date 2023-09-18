#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZCrewStateWidget.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class USBZCrewStateWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CrewStateActor;
    
public:
    USBZCrewStateWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForLocalPlayerState() const;
    
};

