// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_AlienEgg_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AlienEgg.BP_AlienEgg_C.ModulateLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewIntensity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AlienEgg_C::ModulateLights(float* NewIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AlienEgg.BP_AlienEgg_C.ModulateLights");

	ABP_AlienEgg_C_ModulateLights_Params params;
	params.NewIntensity = NewIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AlienEgg.BP_AlienEgg_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_AlienEgg_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AlienEgg.BP_AlienEgg_C.Timeline_0__FinishedFunc");

	ABP_AlienEgg_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AlienEgg.BP_AlienEgg_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_AlienEgg_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AlienEgg.BP_AlienEgg_C.Timeline_0__UpdateFunc");

	ABP_AlienEgg_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AlienEgg.BP_AlienEgg_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AlienEgg_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AlienEgg.BP_AlienEgg_C.ReceiveBeginPlay");

	ABP_AlienEgg_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AlienEgg.BP_AlienEgg_C.All_PlayDugFree
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_AlienEgg_C::All_PlayDugFree()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AlienEgg.BP_AlienEgg_C.All_PlayDugFree");

	ABP_AlienEgg_C_All_PlayDugFree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AlienEgg.BP_AlienEgg_C.SetSpecialEgg
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AlienEgg_C::SetSpecialEgg()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AlienEgg.BP_AlienEgg_C.SetSpecialEgg");

	ABP_AlienEgg_C_SetSpecialEgg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AlienEgg.BP_AlienEgg_C.ExecuteUbergraph_BP_AlienEgg
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AlienEgg_C::ExecuteUbergraph_BP_AlienEgg(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AlienEgg.BP_AlienEgg_C.ExecuteUbergraph_BP_AlienEgg");

	ABP_AlienEgg_C_ExecuteUbergraph_BP_AlienEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
