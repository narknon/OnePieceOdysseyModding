#pragma once
#include "CoreMinimal.h"
#include "KpiNoColumnData.h"
#include "ResponseHeader.h"
#include "CommonResponseParam.h"
#include "AProtocolMessage.h"
#include "SysOfflineKPI.generated.h"

class UObject;

UCLASS(Blueprintable)
class USysOfflineKPI : public UAProtocolMessage {
    GENERATED_BODY()
public:
    USysOfflineKPI();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void RequestParamFromJson(UObject* WorldContextObject, const FString& Json, TArray<FKpiNoColumnData>& KpiNoColumnData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString DumpReponseHeaderParam(UObject* WorldContextObject, const FResponseHeader& Header, const FCommonResponseParam& Param);
    
};

