#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Grenades_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Grenades.HUD_Grenades_C.PreConstruct
struct UHUD_Grenades_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Grenades.HUD_Grenades_C.OnGrenadeCountChanged
struct UHUD_Grenades_C_OnGrenadeCountChanged_Params
{
	int*                                               CurrentCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Grenades.HUD_Grenades_C.Construct
struct UHUD_Grenades_C_Construct_Params
{
};

// Function HUD_Grenades.HUD_Grenades_C.Setup Dynamic HUD
struct UHUD_Grenades_C_Setup_Dynamic_HUD_Params
{
};

// Function HUD_Grenades.HUD_Grenades_C.OnItemEquipped_Event
struct UHUD_Grenades_C_OnItemEquipped_Event_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Grenades.HUD_Grenades_C.OnItemUnequipped_Event
struct UHUD_Grenades_C_OnItemUnequipped_Event_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Grenades.HUD_Grenades_C.Update Visibility
struct UHUD_Grenades_C_Update_Visibility_Params
{
};

// Function HUD_Grenades.HUD_Grenades_C.OnLaserPointerPressed
struct UHUD_Grenades_C_OnLaserPointerPressed_Params
{
};

// Function HUD_Grenades.HUD_Grenades_C.OnLaserPointerReleased
struct UHUD_Grenades_C_OnLaserPointerReleased_Params
{
};

// Function HUD_Grenades.HUD_Grenades_C.ExecuteUbergraph_HUD_Grenades
struct UHUD_Grenades_C_ExecuteUbergraph_HUD_Grenades_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
