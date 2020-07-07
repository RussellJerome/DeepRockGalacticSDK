// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_EquipGrenade_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_Hint_EquipGrenade.Tutorial_Hint_EquipGrenade_C.GrenadeThrown
// (BlueprintCallable, BlueprintEvent)

void UTutorial_Hint_EquipGrenade_C::GrenadeThrown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EquipGrenade.Tutorial_Hint_EquipGrenade_C.GrenadeThrown");

	UTutorial_Hint_EquipGrenade_C_GrenadeThrown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_EquipGrenade.Tutorial_Hint_EquipGrenade_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_EquipGrenade_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EquipGrenade.Tutorial_Hint_EquipGrenade_C.ReceiveOnInitialized");

	UTutorial_Hint_EquipGrenade_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_EquipGrenade.Tutorial_Hint_EquipGrenade_C.ReceiveOnHidden
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_EquipGrenade_C::ReceiveOnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EquipGrenade.Tutorial_Hint_EquipGrenade_C.ReceiveOnHidden");

	UTutorial_Hint_EquipGrenade_C_ReceiveOnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_EquipGrenade.Tutorial_Hint_EquipGrenade_C.ExecuteUbergraph_Tutorial_Hint_EquipGrenade
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_EquipGrenade_C::ExecuteUbergraph_Tutorial_Hint_EquipGrenade(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EquipGrenade.Tutorial_Hint_EquipGrenade_C.ExecuteUbergraph_Tutorial_Hint_EquipGrenade");

	UTutorial_Hint_EquipGrenade_C_ExecuteUbergraph_Tutorial_Hint_EquipGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
