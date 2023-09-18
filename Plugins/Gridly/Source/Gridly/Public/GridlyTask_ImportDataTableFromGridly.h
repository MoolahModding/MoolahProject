#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ImportDataTableFromGridlyDelegateDelegate.h"
#include "GridlyTask_ImportDataTableFromGridly.generated.h"

class UGridlyDataTable;
class UGridlyTask_ImportDataTableFromGridly;
class UObject;

UCLASS(Blueprintable)
class GRIDLY_API UGridlyTask_ImportDataTableFromGridly : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImportDataTableFromGridlyDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImportDataTableFromGridlyDelegate OnProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImportDataTableFromGridlyDelegate OnFail;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGridlyDataTable* GridlyDataTable;
    
public:
    UGridlyTask_ImportDataTableFromGridly();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGridlyTask_ImportDataTableFromGridly* ImportDataTableFromGridly(const UObject* WorldContextObject, UGridlyDataTable* NewGridlyDataTable);
    
};

