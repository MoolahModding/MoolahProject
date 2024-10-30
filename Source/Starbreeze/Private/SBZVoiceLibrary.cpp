#include "SBZVoiceLibrary.h"

USBZVoiceLibrary::USBZVoiceLibrary() {
}

void USBZVoiceLibrary::SayCommentWithClosestHeisterToLocation(UObject* WorldContextObject, const USBZVoiceCommentDataAsset* CommmentAsset, const FVector& Location, bool bIncludePlayers, bool bIncludeCrewAI, float WithinDistance, bool bIsServerInstigated) {
}

void USBZVoiceLibrary::SayCommentWithClosestHeisterToActor(UObject* WorldContextObject, const USBZVoiceCommentDataAsset* CommmentAsset, AActor* Actor, bool bIncludePlayers, bool bIncludeCrewAI, float WithinDistance, bool bIsServerInstigated) {
}

ESBZPlayDialogResult USBZVoiceLibrary::PlayDialogWithSuitablePlayers(UObject* WorldContextObject, const USBZDialogDataAsset* DialogDataAsset, const FBPOnDialogEnded_Delegate& OnDialogEnded) {
    return ESBZPlayDialogResult::Successful;
}

ESBZPlayDialogResult USBZVoiceLibrary::PlayDialogLocally(UObject* WorldContextObject, const USBZDialogDataAsset* DialogDataAsset, const TArray<AActor*>& Performers, AActor* DialogInstigator, bool bCanBeQueued) {
    return ESBZPlayDialogResult::Successful;
}

ESBZPlayDialogResult USBZVoiceLibrary::PlayDialog(UObject* WorldContextObject, const USBZDialogDataAsset* DialogDataAsset, const TArray<AActor*>& Performers, const FBPOnDialogEnded_Delegate& OnDialogEnded, AActor* DialogInstigator, bool bCanBeQueued) {
    return ESBZPlayDialogResult::Successful;
}


