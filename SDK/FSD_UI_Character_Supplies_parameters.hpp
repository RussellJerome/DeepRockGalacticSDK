#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Character_Supplies_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Character_Supplies.UI_Character_Supplies_C.HandleVisiblity
struct UUI_Character_Supplies_C_HandleVisiblity_Params
{
};

// Function UI_Character_Supplies.UI_Character_Supplies_C.SetData
struct UUI_Character_Supplies_C_SetData_Params
{
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Character_Supplies.UI_Character_Supplies_C.OnSupplyStatusChangedEvent
struct UUI_Character_Supplies_C_OnSupplyStatusChangedEvent_Params
{
	float*                                             ammoStatus01;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             healthStatus01;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Character_Supplies.UI_Character_Supplies_C.PreConstruct
struct UUI_Character_Supplies_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Character_Supplies.UI_Character_Supplies_C.ExecuteUbergraph_UI_Character_Supplies
struct UUI_Character_Supplies_C_ExecuteUbergraph_UI_Character_Supplies_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
