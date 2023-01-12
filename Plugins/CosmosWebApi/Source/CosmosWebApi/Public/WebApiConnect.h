#pragma once
#include "CoreMinimal.h"
#include "KpiNoColumnData.h"
#include "ResponseHeader.h"
#include "CommonResponseParam.h"
#include "UserCreateResponseParam.h"
#include "UserLoginResponseParam.h"
#include "UserLoginV2ResponseParam.h"
#include "SysGetEnvResponseParam.h"
#include "SysGetEnvV2ResponseParam.h"
#include "OnErrorDelegate.h"
#include "OnReceiveDelegate.h"
#include "UObject/Object.h"
#include "WebApiConnect.generated.h"

class UNetMessage;
class UWebApiConnect;

UCLASS(Blueprintable)
class COSMOSWEBAPI_API UWebApiConnect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceive OnReceive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnError OnError;
    
    UWebApiConnect();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* UserLoginV2(UObject* WorldContextObject, const FString& pUserId, const FString& Token, int32 skuType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* UserLogin(UObject* WorldContextObject, const FString& pUserId, const FString& Token, int32 skuType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* UserCreate(UObject* WorldContextObject, const FString& pUserId, int32 skuType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SysOfflineKPI(UObject* WorldContextObject, const TArray<FKpiNoColumnData>& KpiNoColumnData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SysKPI(UObject* WorldContextObject, const TArray<FKpiNoColumnData>& KpiNoColumnData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SysGetEnvV2(UObject* WorldContextObject, int32 issureId, const FString& Token, int32 region);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SysGetEnv(UObject* WorldContextObject, int32 issureId, const FString& Token);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SysAgreeKPI(UObject* WorldContextObject, int32 agreeFlg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    UWebApiConnect* SetHeader(UObject* WorldContextObject, const FString& titleCd, const FString& userId, const FString& session, int32 Platform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWebApiConnect* Initialize(UObject* WorldContextObject, const FString& baseUrl, float limitsec);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserLoginV2Response(UNetMessage* Data, FResponseHeader& respHeader, FUserLoginV2ResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserLoginResponse(UNetMessage* Data, FResponseHeader& respHeader, FUserLoginResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserCreateResponse(UNetMessage* Data, FResponseHeader& respHeader, FUserCreateResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetSysOfflineKpiResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetSysKpiResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetSysGetEnvV2Response(UNetMessage* Data, FResponseHeader& respHeader, FSysGetEnvV2ResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetSysGetEnvResponse(UNetMessage* Data, FResponseHeader& respHeader, FSysGetEnvResponseParam& respParam);
    
    UFUNCTION(BlueprintCallable)
    static void GetSysAgreeKpiResponse(UNetMessage* Data, FResponseHeader& respHeader, FCommonResponseParam& respParam);
    
};

