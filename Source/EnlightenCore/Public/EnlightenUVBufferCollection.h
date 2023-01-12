#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EnlightenUVBufferCollectionBase -FallbackName=EnlightenUVBufferCollectionBase
#include "EnlightenUVBufferCollection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEnlightenUVBufferCollectionBase : public UObject {
    GENERATED_BODY()
public:
};


UCLASS(Blueprintable)
class UEnlightenUVBufferCollection : public UEnlightenUVBufferCollectionBase {
    GENERATED_BODY()
public:
    UEnlightenUVBufferCollection();
};

