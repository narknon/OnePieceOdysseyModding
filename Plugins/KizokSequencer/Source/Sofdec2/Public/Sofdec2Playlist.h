#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Sofdec2Playlist.generated.h"

class USofdec2Source;

UCLASS(Blueprintable)
class SOFDEC2_API USofdec2Playlist : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USofdec2Source*> Items;
    
public:
    USofdec2Playlist();
    UFUNCTION(BlueprintCallable)
    bool Replace(int32 Index, USofdec2Source* Replacement);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAt(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool Remove(USofdec2Source* Sofdec2Source);
    
    UFUNCTION(BlueprintCallable)
    int32 Num();
    
    UFUNCTION(BlueprintCallable)
    void Insert(USofdec2Source* Sofdec2Source, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    USofdec2Source* GetRandom(int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    USofdec2Source* GetPrevious(int32& InOutIndex);
    
    UFUNCTION(BlueprintCallable)
    USofdec2Source* GetNext(int32& InOutIndex);
    
    UFUNCTION(BlueprintCallable)
    USofdec2Source* Get(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool AddUrl(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    bool AddFile(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    bool Add(USofdec2Source* Sofdec2Source);
    
};

