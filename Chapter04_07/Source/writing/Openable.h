#pragma once

#include "Openable.generated.h"


/**  */
UINTERFACE()
class WRITING_API UOpenable: public UInterface
{
        GENERATED_BODY()
};

/**  */
class WRITING_API IOpenable
{
        GENERATED_BODY()

    public:
        UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category=Openable)
        void Open();


};
