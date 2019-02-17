#pragma once

#include "Wearable.generated.h"


/**  */
UINTERFACE()
class WRITING_API UWearable: public UInterface
{
        GENERATED_BODY()
};

/**  */
class WRITING_API IWearable
{
        GENERATED_BODY()

    public:
        UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Wearable)
        int32 GetStrengthRequirement();
        UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Wearable)
        bool CanEquip(APawn* Wearer);
        UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Wearable)
        void OnEquip(APawn* Wearer);
};
