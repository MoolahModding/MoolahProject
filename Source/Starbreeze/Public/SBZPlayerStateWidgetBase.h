#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZPlayerStateWidgetBase.generated.h"

class ASBZPlayerState;

UCLASS(Blueprintable, EditInlineNew)
class USBZPlayerStateWidgetBase : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* PlayerState;
    
public:
    USBZPlayerStateWidgetBase();

    UFUNCTION(BlueprintCallable)
    bool IsWidgetForPlayerState(ASBZPlayerState* NewPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForLocalPlayerState() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializePlayerState(ASBZPlayerState* InPlayerState);
    
};

