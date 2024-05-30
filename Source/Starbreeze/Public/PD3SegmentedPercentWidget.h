#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "PD3AttributePercentWidget.h"
#include "PD3SegmentedPercentWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API UPD3SegmentedPercentWidget : public UPD3AttributePercentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute ChunkCountGameplayAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute ChunkGameplayAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute TraumaGameplayAttribute;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfChunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OverridenBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OverridenMainColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OverridenLaggingColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OverridenTraumaColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsArmorColorOverriden;
    
public:
    UPD3SegmentedPercentWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTraumaRatioChanged(float StartOffset, float EndOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageChanged(float StartOffset, float EndOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmorColorChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuildChunks();
    
};

