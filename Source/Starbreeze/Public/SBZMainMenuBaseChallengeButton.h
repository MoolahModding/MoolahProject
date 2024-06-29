#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZChallengeData.h"
#include "SBZMenuButton.h"
#include "SBZMainMenuBaseChallengeButton.generated.h"

class UPaperSprite;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuBaseChallengeButton : public USBZMenuButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZChallengeData ChallengeData;
    
public:
    USBZMainMenuBaseChallengeButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeDataInititalized(const FSBZChallengeData& InChallengeData);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeChallengeData(const FSBZChallengeData& InChallengeData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetPaperSpriteSourceSize(UPaperSprite* Sprite);
    
};

