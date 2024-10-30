#pragma once
#include "CoreMinimal.h"
#include "ESBZRequestFeedbackType.h"
#include "ESBZSocialPlayerCardType.h"
#include "SBZLazyObject.h"
#include "SBZMenuButton.h"
#include "SBZUser.h"
#include "SBZPlayerCard.generated.h"

class USBZPlayerCardContainer;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZPlayerCard : public USBZMenuButton, public ISBZLazyObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZSocialPlayerCardType CardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZRequestFeedbackType CurrentFeedbackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerCardContainer* PlayerCardContainer;
    
public:
    USBZPlayerCard();

private:
    UFUNCTION(BlueprintCallable)
    void OnRequestStatusPopupClosed(FName ActionName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerStatusUpdatedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerDataSet(const FSBZUser& InUserEntry);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnConfirmationPopupClosed(FName ActioName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUserValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZUser GetUser() const;
    

    // Fix for true pure virtual functions not being implemented
};

