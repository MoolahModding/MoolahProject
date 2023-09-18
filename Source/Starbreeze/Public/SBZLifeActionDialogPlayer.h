#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZLifeActionDialogPlayer.generated.h"

class USBZDialogDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class USBZLifeActionDialogPlayer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZDialogDataAsset*> DialogsDataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* CurrentDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomSelection;
    
public:
    USBZLifeActionDialogPlayer();

};

