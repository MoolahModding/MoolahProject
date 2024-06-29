#pragma once
#include "CoreMinimal.h"
#include "SBZMenuButton.h"
#include "SBZMainMenuChallengeCategoryButton.generated.h"

class USBZChallengeCategoryData;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuChallengeCategoryButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZChallengeCategoryData* CategoryData;
    
public:
    USBZMainMenuChallengeCategoryButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeCategoryDataInititalized(USBZChallengeCategoryData* InCategoryData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeCategoryCountRefreshed(int32 TotalCount, int32 CompletedCount);
    
};

