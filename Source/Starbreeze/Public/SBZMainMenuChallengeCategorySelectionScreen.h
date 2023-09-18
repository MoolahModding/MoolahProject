#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZMainMenuChallengeCategorySelectionScreen.generated.h"

class UClass;
class UHorizontalBox;
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
    UClass* ChallengeCategoryButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanelButtonPadding;
    
public:
    USBZMainMenuChallengeCategorySelectionScreen();

private:
    UFUNCTION(BlueprintCallable)
    void NativeOnCategoryButtonSelected(USBZMenuButton* InCategoryButton);
    
};

