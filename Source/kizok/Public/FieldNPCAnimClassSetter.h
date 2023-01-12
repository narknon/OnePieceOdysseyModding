#pragma once
#include "CoreMinimal.h"
#include "FieldNPCAnimClassSetCompleteDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FieldNPCAnimClassSetter.generated.h"

class UObject;
class UFieldNPCAnimClassSetter;
class AKizokFieldNPCCharacter;

UCLASS(Blueprintable)
class KIZOK_API UFieldNPCAnimClassSetter : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldNPCAnimClassSetComplete Completed;
    
public:
    UFieldNPCAnimClassSetter();
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFieldNPCAnimClassSetter* SetFieldNPCAnimClass(UObject* WorldContextObject, AKizokFieldNPCCharacter* npc, UClass* animClass);
    
};

