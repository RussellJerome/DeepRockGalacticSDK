#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Resources_Player_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Resources_Player.HUD_Resources_Player_C.Construct
struct UHUD_Resources_Player_C_Construct_Params
{
};

// Function HUD_Resources_Player.HUD_Resources_Player_C.PreConstruct
struct UHUD_Resources_Player_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Player.HUD_Resources_Player_C.Add Resource
struct UHUD_Resources_Player_C_Add_Resource_Params
{
	class UCappedResource**                            Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Player.HUD_Resources_Player_C.OnResourceAdded
struct UHUD_Resources_Player_C_OnResourceAdded_Params
{
	class UCappedResource**                            Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Resources_Player.HUD_Resources_Player_C.OnResourceChanged
struct UHUD_Resources_Player_C_OnResourceChanged_Params
{
	class UHUD_Resources_Player_Icon_C**               ResourceIcon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_Resources_Player.HUD_Resources_Player_C.RefreshVisibility
struct UHUD_Resources_Player_C_RefreshVisibility_Params
{
};

// Function HUD_Resources_Player.HUD_Resources_Player_C.OnLaserPointerPressed_Event
struct UHUD_Resources_Player_C_OnLaserPointerPressed_Event_Params
{
};

// Function HUD_Resources_Player.HUD_Resources_Player_C.OnLaserPointerReleased_Event
struct UHUD_Resources_Player_C_OnLaserPointerReleased_Event_Params
{
};

// Function HUD_Resources_Player.HUD_Resources_Player_C.ExecuteUbergraph_HUD_Resources_Player
struct UHUD_Resources_Player_C_ExecuteUbergraph_HUD_Resources_Player_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
