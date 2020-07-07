// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_LevelScale_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_LevelScale.Cheat_LevelScale_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCheat_LevelScale_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_LevelScale.Cheat_LevelScale_C.Construct");

	UCheat_LevelScale_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_LevelScale.Cheat_LevelScale_C.BP_OnRefresh
// (Event, Protected, BlueprintEvent)

void UCheat_LevelScale_C::BP_OnRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_LevelScale.Cheat_LevelScale_C.BP_OnRefresh");

	UCheat_LevelScale_C_BP_OnRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_LevelScale.Cheat_LevelScale_C.ExecuteUbergraph_Cheat_LevelScale
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_LevelScale_C::ExecuteUbergraph_Cheat_LevelScale(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_LevelScale.Cheat_LevelScale_C.ExecuteUbergraph_Cheat_LevelScale");

	UCheat_LevelScale_C_ExecuteUbergraph_Cheat_LevelScale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
