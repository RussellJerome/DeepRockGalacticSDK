#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_DamageClass_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Construct
struct UHUD_DamageClass_Item_C_Construct_Params
{
};

// Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Deactivate
struct UHUD_DamageClass_Item_C_Deactivate_Params
{
};

// Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Activate
struct UHUD_DamageClass_Item_C_Activate_Params
{
};

// Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.OnDeactivedFinished
struct UHUD_DamageClass_Item_C_OnDeactivedFinished_Params
{
};

// Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.ExecuteUbergraph_HUD_DamageClass_Item
struct UHUD_DamageClass_Item_C_ExecuteUbergraph_HUD_DamageClass_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Elapsed__DelegateSignature
struct UHUD_DamageClass_Item_C_Elapsed__DelegateSignature_Params
{
	class UHUD_DamageClass_Item_C**                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
