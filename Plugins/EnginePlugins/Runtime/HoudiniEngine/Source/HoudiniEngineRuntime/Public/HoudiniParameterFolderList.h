#pragma once
#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterFolderList.generated.h"

class UHoudiniParameterFolder;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterFolderList : public UHoudiniParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTabMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTabsShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHoudiniParameterFolder*> TabFolders;
    
    UHoudiniParameterFolderList();

};

