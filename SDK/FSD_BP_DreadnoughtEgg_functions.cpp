// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DreadnoughtEgg_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.Carve
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DreadnoughtEgg_C::Carve()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.Carve");

	ABP_DreadnoughtEgg_C_Carve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.LightIntensity__FinishedFunc
// (BlueprintEvent)

void ABP_DreadnoughtEgg_C::LightIntensity__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.LightIntensity__FinishedFunc");

	ABP_DreadnoughtEgg_C_LightIntensity__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.LightIntensity__UpdateFunc
// (BlueprintEvent)

void ABP_DreadnoughtEgg_C::LightIntensity__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.LightIntensity__UpdateFunc");

	ABP_DreadnoughtEgg_C_LightIntensity__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.OnEggBroken
// (BlueprintCallable, BlueprintEvent)

void ABP_DreadnoughtEgg_C::OnEggBroken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.OnEggBroken");

	ABP_DreadnoughtEgg_C_OnEggBroken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DreadnoughtEgg_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.ReceiveBeginPlay");

	ABP_DreadnoughtEgg_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.OnMatchStarted
// (BlueprintCallable, BlueprintEvent)

void ABP_DreadnoughtEgg_C::OnMatchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.OnMatchStarted");

	ABP_DreadnoughtEgg_C_OnMatchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.ExecuteUbergraph_BP_DreadnoughtEgg
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DreadnoughtEgg_C::ExecuteUbergraph_BP_DreadnoughtEgg(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DreadnoughtEgg.BP_DreadnoughtEgg_C.ExecuteUbergraph_BP_DreadnoughtEgg");

	ABP_DreadnoughtEgg_C_ExecuteUbergraph_BP_DreadnoughtEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
