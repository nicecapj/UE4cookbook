#pragma once
#include "CoreMinimal.h"
#include "MyInterface.generated.h"

/** */
UINTERFACE()
class WRITING_API UMyInterface : public UInterface
{
        GENERATED_BODY()
};

/** */
class WRITING_API IMyInterface
{
        GENERATED_BODY()
    public:
        virtual FString GetTestName();
};