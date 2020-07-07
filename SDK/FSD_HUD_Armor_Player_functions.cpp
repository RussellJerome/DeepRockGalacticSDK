// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Armor_Player_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Armor_Player.HUD_Armor_Player_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Armor_Player_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Armor_Player.HUD_Armor_Player_C.Construct");

	UHUD_Armor_Player_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Armor_Player.HUD_Armor_Player_C.ExecuteUbergraph_HUD_Armor_Player
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Armor_Player_C::ExecuteUbergraph_HUD_Armor_Player(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Armor_Player.HUD_Armor_Player_C.ExecuteUbergraph_HUD_Armor_Player");

	UHUD_Armor_Player_C_ExecuteUbergraph_HUD_Armor_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
