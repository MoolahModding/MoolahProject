#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "ESBZArmorChunkType.h"
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ESBZArmorChunkType> ArmorChunkTypeArray;
    
public:
    UPD3SegmentedPercentWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTraumaRatioChanged(float StartOffset, float EndOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmorChunkTypeArrayChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuildChunks();
    
};

