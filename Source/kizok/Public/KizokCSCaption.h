#pragma once
#include "CoreMinimal.h"
#include "KizokCSCaptionParam.h"
#include "KizokUserWidget.h"
#include "KizokCSCaption.generated.h"

class UKizokSystemEventListener;
class UCanvasPanelSlot;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class KIZOK_API UKizokCSCaption : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokCSCaptionParam Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MessageTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKizokSystemEventListener* SystemEventListener;
    
public:
    UKizokCSCaption();
protected:
    UFUNCTION(BlueprintCallable)
    void SetMessagePosition(UCanvasPanelSlot* InCanvasPanelSlot, FName InLayout);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectLayoutCenterCenter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectLayoutBottomCenter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectCSCaptionParamFromMessageId(const FKizokCSCaptionParam& InMessageParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReflectCSCaptionParam(const FKizokCSCaptionParam& InMessageParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetMessageDataTable() const;
    
};

