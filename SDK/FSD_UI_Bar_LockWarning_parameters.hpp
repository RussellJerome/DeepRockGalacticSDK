#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Bar_LockWarning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.AnimStop
struct UUI_Bar_LockWarning_C_AnimStop_Params
{
};

// Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.AnimPlay
struct UUI_Bar_LockWarning_C_AnimPlay_Params
{
};

// Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.Construct
struct UUI_Bar_LockWarning_C_Construct_Params
{
};

// Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.SetPrice
struct UUI_Bar_LockWarning_C_SetPrice_Params
{
	class UDrinkableDataAsset**                        Drinkable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.SetFixedPrice
struct UUI_Bar_LockWarning_C_SetFixedPrice_Params
{
	TMap<class UResourceData*, int>*                   Cost;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_Bar_LockWarning.UI_Bar_LockWarning_C.ExecuteUbergraph_UI_Bar_LockWarning
struct UUI_Bar_LockWarning_C_ExecuteUbergraph_UI_Bar_LockWarning_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
