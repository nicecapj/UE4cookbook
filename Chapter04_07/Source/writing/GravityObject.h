#pragma once

#include "GravityObject.generated.h"


/**  */
UINTERFACE()
class WRITING_API UGravityObject: public UInterface
{
        GENERATED_BODY()
};

/**  */
class WRITING_API IGravityObject
{
        GENERATED_BODY()

    public:
        virtual void EnableGravity();

        virtual void DisableGravity();
        /*
        UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=Test)
        FString GetTestName2();*/
};
