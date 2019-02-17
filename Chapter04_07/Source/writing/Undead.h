#pragma once
#include "Killable.h"
#include "Undead.generated.h"


/**  */
UINTERFACE()
class WRITING_API UUndead: public UKillable
{
        GENERATED_BODY()
};

/**  */
class WRITING_API IUndead: public IKillable
{
        GENERATED_BODY()

    public:
        virtual bool IsDead() override;
        virtual void Die() override;
        virtual void Turn();
        virtual void Banish();
};
