#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "SBZScrollBox.generated.h"

class UInputComponent;

UCLASS(Blueprintable)
class USBZScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputAxisYName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollSpeedY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputAxisDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCustomFocus;
    
public:
    USBZScrollBox();

    UFUNCTION(BlueprintCallable)
    void SetCustomFocus(bool bInIsCustomFocus);
    
};

