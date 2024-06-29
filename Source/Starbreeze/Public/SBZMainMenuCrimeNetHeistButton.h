#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnMenuButtonCustomNavigationDelegate.h"
#include "SBZMenuButton.h"
#include "SBZMainMenuCrimeNetHeistButton.generated.h"

class UPD3HeistDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZMainMenuCrimeNetHeistButton : public USBZMenuButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuButtonCustomNavigation OnMenuButtonCustomNavigation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSoftObjectPath HeistSoftObjectPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPD3HeistDataAsset* HeistData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HeistCollectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HeistIndex;
    
public:
    USBZMainMenuCrimeNetHeistButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeistDataInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusChanged(bool bIsFocused);
    
    UFUNCTION(BlueprintCallable)
    void InitializeHeistDataFromSoftObjectPath(const FSoftObjectPath& InHeistSoftObjectPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSoftObjectPath GetHeistLevelPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPD3HeistDataAsset* GetHeistData() const;
    
};

