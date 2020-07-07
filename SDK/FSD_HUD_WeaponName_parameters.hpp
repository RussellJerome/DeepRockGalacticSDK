#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_WeaponName_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_WeaponName.HUD_WeaponName_C.UpdateLabel
struct UHUD_WeaponName_C_UpdateLabel_Params
{
};

// Function HUD_WeaponName.HUD_WeaponName_C.Construct
struct UHUD_WeaponName_C_Construct_Params
{
};

// Function HUD_WeaponName.HUD_WeaponName_C.OnItemEquipped
struct UHUD_WeaponName_C_OnItemEquipped_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_WeaponName.HUD_WeaponName_C.PreConstruct
struct UHUD_WeaponName_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_WeaponName.HUD_WeaponName_C.ExecuteUbergraph_HUD_WeaponName
struct UHUD_WeaponName_C_ExecuteUbergraph_HUD_WeaponName_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
