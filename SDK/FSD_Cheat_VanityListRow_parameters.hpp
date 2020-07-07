#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_VanityListRow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Cheat_VanityListRow.Cheat_VanityListRow_C.Construct
struct UCheat_VanityListRow_C_Construct_Params
{
};

// Function Cheat_VanityListRow.Cheat_VanityListRow_C.BndEvt__CheckBox_49_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
struct UCheat_VanityListRow_C_BndEvt__CheckBox_49_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool*                                              bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_VanityListRow.Cheat_VanityListRow_C.ExecuteUbergraph_Cheat_VanityListRow
struct UCheat_VanityListRow_C_ExecuteUbergraph_Cheat_VanityListRow_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cheat_VanityListRow.Cheat_VanityListRow_C.OnCheckStateChanged__DelegateSignature
struct UCheat_VanityListRow_C_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              Is_Checked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UVanityItem**                                Vanity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVanitySlot*                                       Vanity_Type;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
