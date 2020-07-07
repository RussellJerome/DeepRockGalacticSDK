#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BerzerkComp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BerzerkComp.BP_BerzerkComp_C.Receive_ActivatePerk
struct UBP_BerzerkComp_C_Receive_ActivatePerk_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BerzerkComp.BP_BerzerkComp_C.OnItemEquipped_Event_1
struct UBP_BerzerkComp_C_OnItemEquipped_Event_1_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BerzerkComp.BP_BerzerkComp_C.ExecuteUbergraph_BP_BerzerkComp
struct UBP_BerzerkComp_C_ExecuteUbergraph_BP_BerzerkComp_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
