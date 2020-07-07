#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_NetInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_NetInfo.UI_NetInfo_C.PreConstruct
struct UUI_NetInfo_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NetInfo.UI_NetInfo_C.Construct
struct UUI_NetInfo_C_Construct_Params
{
};

// Function UI_NetInfo.UI_NetInfo_C.OnShowNetInfoChanged
struct UUI_NetInfo_C_OnShowNetInfoChanged_Params
{
	bool*                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NetInfo.UI_NetInfo_C.SlowTick
struct UUI_NetInfo_C_SlowTick_Params
{
};

// Function UI_NetInfo.UI_NetInfo_C.ExecuteUbergraph_UI_NetInfo
struct UUI_NetInfo_C_ExecuteUbergraph_UI_NetInfo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
