#include "SBZLevelLibrary.h"
#include "Templates/SubclassOf.h"

USBZLevelLibrary::USBZLevelLibrary() {
}

ULevel* USBZLevelLibrary::GetLevel(AActor* InActor) {
    return NULL;
}

void USBZLevelLibrary::GetAllActorsOfClassInLevel(ULevel* Level, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors) {
}


