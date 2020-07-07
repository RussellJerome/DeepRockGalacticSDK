#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Resources_Team_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Resources_Team.HUD_Resources_Team_C.IsObjectiveResource
struct UHUD_Resources_Team_C_IsObjectiveResource_Params
{
	class UCappedResource**                            InResource;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsObjective;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UCappedResource*                             OutResource;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Team.HUD_Resources_Team_C.Construct
struct UHUD_Resources_Team_C_Construct_Params
{
};

// Function HUD_Resources_Team.HUD_Resources_Team_C.PreConstruct
struct UHUD_Resources_Team_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Team.HUD_Resources_Team_C.Add Resource
struct UHUD_Resources_Team_C_Add_Resource_Params
{
	class UCappedResource**                            Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Team.HUD_Resources_Team_C.Show Widget
struct UHUD_Resources_Team_C_Show_Widget_Params
{
};

// Function HUD_Resources_Team.HUD_Resources_Team_C.Hide Widget
struct UHUD_Resources_Team_C_Hide_Widget_Params
{
};

// Function HUD_Resources_Team.HUD_Resources_Team_C.Ping Widget
struct UHUD_Resources_Team_C_Ping_Widget_Params
{
};

// Function HUD_Resources_Team.HUD_Resources_Team_C.OnTransitionFinished
struct UHUD_Resources_Team_C_OnTransitionFinished_Params
{
};

// Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingEnd_Event
struct UHUD_Resources_Team_C_OnDepositingEnd_Event_Params
{
	class UResourceBank**                              ResourceBank;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingBegin_Event
struct UHUD_Resources_Team_C_OnDepositingBegin_Event_Params
{
	class UResourceBank**                              ResourceBank;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceChanged_Event
struct UHUD_Resources_Team_C_OnResourceChanged_Event_Params
{
	class UCappedResource**                            Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceAdded
struct UHUD_Resources_Team_C_OnResourceAdded_Params
{
	class UCappedResource**                            Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Team.HUD_Resources_Team_C.OnToggleOutline_Event
struct UHUD_Resources_Team_C_OnToggleOutline_Event_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Team.HUD_Resources_Team_C.ExecuteUbergraph_HUD_Resources_Team
struct UHUD_Resources_Team_C_ExecuteUbergraph_HUD_Resources_Team_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
