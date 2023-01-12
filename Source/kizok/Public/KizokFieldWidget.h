#pragma once
#include "CoreMinimal.h"
#include "KizokFieldWidgetLoopInteractPlayAnimDelegate.h"
#include "KizokFieldWidgetLoopPlayAnimDelegate.h"
#include "KizokFieldWidgetOutPlayAnimDelegate.h"
#include "KizokFieldWidgetInPlayAnimDelegate.h"
#include "KizokUserWidget.h"
#include "KizokFieldWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UKizokFieldWidget : public UKizokUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokFieldWidgetInPlayAnim InPlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokFieldWidgetOutPlayAnim OutPlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokFieldWidgetLoopPlayAnim LoopPlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKizokFieldWidgetLoopInteractPlayAnim LoopInteractPlay;
    
public:
    UKizokFieldWidget();
    UFUNCTION(BlueprintCallable)
    void SetLoopNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void OnOutPlay();
    
    UFUNCTION(BlueprintCallable)
    void OnLoopPlay();
    
    UFUNCTION(BlueprintCallable)
    void OnLoopInteractPlay();
    
    UFUNCTION(BlueprintCallable)
    void OnInPlay();
    
};

