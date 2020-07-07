#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Shotgun_A_Shell_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Shotgun_A_Shell.BP_Shotgun_A_Shell_C.Attached
struct ABP_Shotgun_A_Shell_C_Attached_Params
{
	class AActor**                                     Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Shotgun_A_Shell.BP_Shotgun_A_Shell_C.OnItemSkinned
struct ABP_Shotgun_A_Shell_C_OnItemSkinned_Params
{
	class USkinEffect**                                Skin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Shotgun_A_Shell.BP_Shotgun_A_Shell_C.ExecuteUbergraph_BP_Shotgun_A_Shell
struct ABP_Shotgun_A_Shell_C_ExecuteUbergraph_BP_Shotgun_A_Shell_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
