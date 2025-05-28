#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZArmorChunkWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class USBZArmorChunkWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Chunk;
    
public:
    USBZArmorChunkWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetChunkBroken(bool bInIsBroken);
    
};

