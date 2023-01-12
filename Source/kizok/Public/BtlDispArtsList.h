#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PLAYER_ID.h"
#include "BtlDispArtsList.generated.h"

USTRUCT(BlueprintType)
struct FBtlDispArtsList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> ActPlayerFaceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<PLAYER_ID> PlayerLinkList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsableArts;
    
    KIZOK_API FBtlDispArtsList();
};

