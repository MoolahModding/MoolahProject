#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "SBZGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class USBZGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    USBZGameViewportClient();

};

