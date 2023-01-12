#pragma once
#include "CoreMinimal.h"
#include "KpiNoColumnData.h"
#include "ResponseHeader.h"
#include "CommonResponseParam.h"
#include "AProtocolMessage.h"
#include "SysKPI.generated.h"

class UObject;

UCLASS(Blueprintable)
class USysKPI : public UAProtocolMessage {
    GENERATED_BODY()
public:
    USysKPI();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void RequestParamFromJson(UObject* WorldContextObject, const FString& Json, TArray<FKpiNoColumnData>& KpiNoColumnData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString DumpReponseHeaderParam(UObject* WorldContextObject, const FResponseHeader& Header, const FCommonResponseParam& Param);
    
};

