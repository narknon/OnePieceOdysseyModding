#pragma once
#include "CoreMinimal.h"
#include "EKizokTimeZone.h"
#include "EKizokTravelLockMode.h"
#include "KizokIconTypeInfo.h"
#include "KizokRegionMapInfo.h"
#include "UObject/Object.h"
#include "KizokMapManager.generated.h"

UCLASS(Blueprintable)
class KIZOK_API UKizokMapManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKizokRegionMapInfo> RegionMapInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKizokIconTypeInfo> IconTypeInfoList;
    
public:
    UKizokMapManager();
    UFUNCTION(BlueprintCallable)
    void SetTravelLockMode(EKizokTravelLockMode InLockMode);
    
    UFUNCTION(BlueprintCallable)
    void SetMapSymbolVisibility(FName InMapSymbolId, bool bInVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWeatherId(FName InWeatherId);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTimeZoneByEnum(EKizokTimeZone InTimeZone);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTimeZoneByByte(uint8 InTimeZone);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentRoomId(FName InRoomId);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentRegionId(FName InRegionId);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAreaId(FName InAreaId);
    
    UFUNCTION(BlueprintCallable)
    void OpenTravelPoint(FName InTravelId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenTravelPoint(FName InTravelId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokTravelLockMode GetTravelLockMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentWeatherId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKizokTimeZone GetCurrentTimeZoneByEnum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetCurrentTimeZoneByByte() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentRoomId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentRegionId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentAreaId() const;
    
};

