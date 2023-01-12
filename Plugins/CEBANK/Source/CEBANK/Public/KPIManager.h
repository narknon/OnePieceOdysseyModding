#pragma once
#include "CoreMinimal.h"
#include "KpiNoColumnData.h"
#include "UObject/Object.h"
#include "KPIManager.generated.h"

class UNetMessage;
class UWebApiConnect;

UCLASS(Blueprintable)
class CEBANK_API UKPIManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWebApiConnect* WebApiConnect;
    
public:
    UKPIManager();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SendDirect(UObject* WorldContextObject, const FKpiNoColumnData& KpiNoColumnData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Send(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void OnReceive(UNetMessage* Data);
    
    UFUNCTION(BlueprintCallable)
    void OnError(int32 code, const FString& errmsg);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Login(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSendEnable() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void GetEnv(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void AgreeKPI(UObject* WorldContextObject, bool bAgree);
    
    UFUNCTION(BlueprintCallable)
    void AddKPINoColumnData(const FKpiNoColumnData& KpiNoColumnData);
    
};

