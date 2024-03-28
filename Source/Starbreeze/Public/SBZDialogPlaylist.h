#pragma once
#include "CoreMinimal.h"
#include "SBZDialogPlaylist.generated.h"

class USBZDialogDataAsset;

USTRUCT(BlueprintType)
struct FSBZDialogPlaylist {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZDialogDataAsset*> Dialogs;
    
    STARBREEZE_API FSBZDialogPlaylist();
};

