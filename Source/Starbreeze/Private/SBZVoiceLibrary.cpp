#include "SBZVoiceLibrary.h"

USBZVoiceLibrary::USBZVoiceLibrary() {
}

ESBZPlayDialogResult USBZVoiceLibrary::PlayDialogWithSuitablePlayers(UObject* WorldContextObject, const USBZDialogDataAsset* DialogDataAsset, const FBPOnDialogEnded_Delegate& OnDialogEnded) {
    return ESBZPlayDialogResult::Successful;
}

ESBZPlayDialogResult USBZVoiceLibrary::PlayDialog(UObject* WorldContextObject, const USBZDialogDataAsset* DialogDataAsset, const TArray<AActor*>& Performers, const FBPOnDialogEnded_Delegate& OnDialogEnded, AActor* DialogInstigator) {
    return ESBZPlayDialogResult::Successful;
}


