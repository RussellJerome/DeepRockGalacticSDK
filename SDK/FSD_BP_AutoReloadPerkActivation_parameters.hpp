#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_AutoReloadPerkActivation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.Receive_ActivatePerk
struct UBP_AutoReloadPerkActivation_C_Receive_ActivatePerk_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.OnItemEquipped_Event_1
struct UBP_AutoReloadPerkActivation_C_OnItemEquipped_Event_1_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoReloadPerkActivation.BP_AutoReloadPerkActivation_C.ExecuteUbergraph_BP_AutoReloadPerkActivation
struct UBP_AutoReloadPerkActivation_C_ExecuteUbergraph_BP_AutoReloadPerkActivation_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
