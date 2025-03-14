#pragma once
#include "CoreMinimal.h"
#include "ESBZArmorChunkType.h"
#include "OnArmorCategoryButtonSelectedDelegate.h"
#include "SBZMenuButton.h"
#include "SBZArmorModCategoryButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USBZArmorModCategoryButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ArmorChunkIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZArmorChunkType EquippedArmorChunkType;
    
public:
    USBZArmorModCategoryButton();

    UFUNCTION(BlueprintCallable)
    void SetSelectedCallback(FOnArmorCategoryButtonSelected SelectedCallback);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmorModCategoryDataIntialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeModCategoryData(int32 InArmorChunkIndex, ESBZArmorChunkType InEquippedType);
    
};

