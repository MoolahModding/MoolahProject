#pragma once
#include "CoreMinimal.h"
#include "SBZButtonControlsReference.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZOnFullscreenVideoActiveChangedDelegateDelegate.h"
#include "SBZFullscreenVideoWidget.generated.h"

class UBinkMediaPlayer;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZFullscreenVideoWidget : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnFullscreenVideoActiveChangedDelegate OnActiveChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* VideoImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* VideoPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlsReference PlayControlsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlsReference PauseControlsReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowInputDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOderChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_SubtitleText;
    
public:
    USBZFullscreenVideoWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnControlReferencePressed(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnControlReferencePressed(const FName& ActionName);
    
};

