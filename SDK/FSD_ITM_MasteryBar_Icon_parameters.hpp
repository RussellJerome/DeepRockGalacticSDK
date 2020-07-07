#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MasteryBar_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ToggleIcons
struct UITM_MasteryBar_Icon_C_ToggleIcons_Params
{
	bool*                                              ShowIcons;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.SetUnlocked
struct UITM_MasteryBar_Icon_C_SetUnlocked_Params
{
	bool*                                              IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.Construct
struct UITM_MasteryBar_Icon_C_Construct_Params
{
};

// Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.PreConstruct
struct UITM_MasteryBar_Icon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ReceiveUnlocked
struct UITM_MasteryBar_Icon_C_ReceiveUnlocked_Params
{
};

// Function ITM_MasteryBar_Icon.ITM_MasteryBar_Icon_C.ExecuteUbergraph_ITM_MasteryBar_Icon
struct UITM_MasteryBar_Icon_C_ExecuteUbergraph_ITM_MasteryBar_Icon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
