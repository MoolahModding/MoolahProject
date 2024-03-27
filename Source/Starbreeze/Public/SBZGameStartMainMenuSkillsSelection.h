#pragma once
#include "CoreMinimal.h"
#include "ESBZMetaRequestResult.h"
#include "SBZMenuStackScreenWidgetWithTutorial.h"
#include "SBZPlayerLoadoutConfig.h"
#include "SBZGameStartMainMenuSkillsSelection.generated.h"

class USBZSkillData;

UCLASS(Blueprintable, EditInlineNew)
class USBZGameStartMainMenuSkillsSelection : public USBZMenuStackScreenWidgetWithTutorial {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZSkillData*> Skills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlternativeSelectionInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlternativeSelectionHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DescriptionScrollAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DescriptionScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisDeadZone;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentLoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZPlayerLoadoutConfig CachedPlayerLoadout;
    
public:
    USBZGameStartMainMenuSkillsSelection();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDescriptionScrollAxisChanged(float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAlternativeSelectionReleased();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAlternativeSelectionPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAlternativeHoldDurationComplete();
    
    UFUNCTION()
    void NativeOnAlternativeSelectionReleased();
    
    UFUNCTION()
    void NativeOnAlternativeSelectionPressed();
    
private:
    UFUNCTION()
    void HandleProgressionSave(ESBZMetaRequestResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    bool CustomizeSkillsForPlayerLoadoutIndex(int32 InLoadoutIndex);
    
};

