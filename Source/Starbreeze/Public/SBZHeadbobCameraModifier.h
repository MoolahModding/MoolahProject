#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerCameraModifier.h"
#include "SBZHeadbobCameraModifier.generated.h"

class ASBZCharacter;
class USBZHeadbobData;
class USBZTargetingHeadbobData;

UCLASS(Blueprintable)
class USBZHeadbobCameraModifier : public USBZPlayerCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZHeadbobData* DefaultHeadbobData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZHeadbobData* CurrentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZTargetingHeadbobData* CurrentTargetingData;
    
public:
    USBZHeadbobCameraModifier();
private:
    UFUNCTION(BlueprintCallable)
    void HandleEquippableArrayChanged(ASBZCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void HandleCurrentEquippableIndexChanged(ASBZCharacter* Character, int32 CurrentEquippableIndex, bool bIsOnlyDataChanged);
    
};

