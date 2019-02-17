#pragma once

#include "Killable.generated.h"


/**  */
UINTERFACE(meta=(CannotImplementInterfaceInBlueprint))
class WRITING_API UKillable: public UInterface
{
        GENERATED_BODY()
};

/**  */
class WRITING_API IKillable
{
        GENERATED_BODY()

    public:
        UFUNCTION(BlueprintCallable, Category=Killable)
        virtual bool IsDead();
        UFUNCTION(BlueprintCallable, Category = Killable)
        virtual void Die();

};
