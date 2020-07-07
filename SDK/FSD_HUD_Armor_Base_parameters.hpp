#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Armor_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Armor_Base.HUD_Armor_Base_C.ArmorChanged
struct UHUD_Armor_Base_C_ArmorChanged_Params
{
	float*                                             Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Armor_Base.HUD_Armor_Base_C.Bind To Health Component
struct UHUD_Armor_Base_C_Bind_To_Health_Component_Params
{
	class UHealthComponent**                           HealthComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_Armor_Base.HUD_Armor_Base_C.PreConstruct
struct UHUD_Armor_Base_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Armor_Base.HUD_Armor_Base_C.Unbind Health Component
struct UHUD_Armor_Base_C_Unbind_Health_Component_Params
{
};

// Function HUD_Armor_Base.HUD_Armor_Base_C.Set Armor Pct
struct UHUD_Armor_Base_C_Set_Armor_Pct_Params
{
	float*                                             InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Armor_Base.HUD_Armor_Base_C.Bind To Player
struct UHUD_Armor_Base_C_Bind_To_Player_Params
{
	class APlayerCharacter**                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Armor_Base.HUD_Armor_Base_C.ExecuteUbergraph_HUD_Armor_Base
struct UHUD_Armor_Base_C_ExecuteUbergraph_HUD_Armor_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
