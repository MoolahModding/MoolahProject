#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZSocialPartyButtonContainer.generated.h"

class UPanelWidget;
class USBZMenuButton;
class USBZSocialPartyMemberButton;

UCLASS(Blueprintable, EditInlineNew)
class USBZSocialPartyButtonContainer : public USBZMenuStackWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_PartyMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZSocialPartyMemberButton*> PartyMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZSocialPartyMemberButton> PartyMemberButtonWidgetClass;
    
public:
    USBZSocialPartyButtonContainer();

    UFUNCTION(BlueprintCallable)
    void RequestPartyLeave();
    
    UFUNCTION(BlueprintCallable)
    void RefreshPanel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPartyButtonFocused(USBZMenuButton* MenuButton, bool bIsFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPanelRefreshComplete();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPartyMembersNum();
    
    UFUNCTION(BlueprintCallable)
    void BuildPartyMembersList();
    
};

