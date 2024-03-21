#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackScreenWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZMainMenuChallengeCategorySelectionScreen.generated.h"

class UHorizontalBox;
class USBZMainMenuChallengeCategoryButton;
class USBZMainMenuChallengesWidget;
class USBZMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuChallengeCategorySelectionScreen : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_ChallengeCategorySelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMainMenuChallengesWidget* Widget_ChallengeScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZMainMenuChallengeCategoryButton> ChallengeCategoryButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanelButtonPadding;
    
public:
    USBZMainMenuChallengeCategorySelectionScreen();
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnCategoryButtonSelected(USBZMenuButton* InCategoryButton);
    
};

