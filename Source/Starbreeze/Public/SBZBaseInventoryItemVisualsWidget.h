#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZBaseInventoryItemVisualsWidget.generated.h"

class UPaperSprite;
class USBZInventoryBaseData;

UCLASS(Blueprintable, EditInlineNew)
class USBZBaseInventoryItemVisualsWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPaperSprite* ItemSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPaperSprite* LastItemSprite;
    
public:
    USBZBaseInventoryItemVisualsWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SpriteLoaded(UPaperSprite* OutLoadedSprite);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEmpty();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLoadingChanged(bool bIsLoading);
    
private:
    UFUNCTION()
    void NativeOnSpriteLoaded();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ItemInitialized(const USBZInventoryBaseData* NewItem);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeItem(const USBZInventoryBaseData* InItem, bool bShouldLoadImage);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void EmptySet();
    
};

