#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZNode.h"
#include "SBZRoomPathFinder.generated.h"

class ISBZRoomConnectorInterface;
class USBZRoomConnectorInterface;

UCLASS(Blueprintable)
class STARBREEZE_API USBZRoomPathFinder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<ISBZRoomConnectorInterface>> Frontier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FSBZNode> Visited;
    
public:
    USBZRoomPathFinder();

};

