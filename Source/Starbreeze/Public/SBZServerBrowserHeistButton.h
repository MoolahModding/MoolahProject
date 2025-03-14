#pragma once
#include "CoreMinimal.h"
#include "ESBZHeistType.h"
#include "SBZJoinableHeistData.h"
#include "SBZMainMenuCrimeNetHeistButton.h"
#include "SBZServerBrowserHeistButton.generated.h"

class UBorder;
class USBZServerBrowserStoryModeButton;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZServerBrowserHeistButton : public USBZMainMenuCrimeNetHeistButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZServerBrowserStoryModeButton* Button_IntroStory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZServerBrowserStoryModeButton* Button_OutroStory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border_HeistOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZHeistType HeistType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZJoinableHeistData JoinableHeistData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHeistOwned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFriendHeist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString FirstPlatformPurchaseUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsHeistButtonInnerNavigated;
    
public:
    USBZServerBrowserHeistButton();

    UFUNCTION(BlueprintCallable)
    void ToggleHeistButtonInnerNavigation(bool bEnableInnerNavigation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBeJoinedThroughFriend();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSessionChangedPopupClosed(FName ActionName);
    
public:
    UFUNCTION(BlueprintCallable)
    void JoinMatchThroughFriend();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetHeistSessionID() const;
    
};

