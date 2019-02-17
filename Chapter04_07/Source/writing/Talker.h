#pragma once

#include "Talker.generated.h"


/**  */
UINTERFACE()
class WRITING_API UTalker: public UInterface
{
        GENERATED_BODY()
};

/**  */
class WRITING_API ITalker
{
        GENERATED_BODY()

    public:
        UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Talk)
        void StartTalking();


};
