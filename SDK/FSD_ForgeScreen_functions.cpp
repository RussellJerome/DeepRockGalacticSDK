// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ForgeScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForgeScreen.ForgeScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UForgeScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForgeScreen.ForgeScreen_C.Construct");

	UForgeScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForgeScreen.ForgeScreen_C.StartForging
// (BlueprintCallable, BlueprintEvent)

void UForgeScreen_C::StartForging()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForgeScreen.ForgeScreen_C.StartForging");

	UForgeScreen_C_StartForging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForgeScreen.ForgeScreen_C.FrogingDone
// (BlueprintCallable, BlueprintEvent)

void UForgeScreen_C::FrogingDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForgeScreen.ForgeScreen_C.FrogingDone");

	UForgeScreen_C_FrogingDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForgeScreen.ForgeScreen_C.ExecuteUbergraph_ForgeScreen
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UForgeScreen_C::ExecuteUbergraph_ForgeScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForgeScreen.ForgeScreen_C.ExecuteUbergraph_ForgeScreen");

	UForgeScreen_C_ExecuteUbergraph_ForgeScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
