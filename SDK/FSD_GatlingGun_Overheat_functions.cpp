// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_GatlingGun_Overheat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GatlingGun_Overheat.GatlingGun_Overheat_C.SetHeatValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         HeatPercentage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Overheated                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGatlingGun_Overheat_C::SetHeatValue(float* HeatPercentage, bool* Overheated)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatlingGun_Overheat.GatlingGun_Overheat_C.SetHeatValue");

	UGatlingGun_Overheat_C_SetHeatValue_Params params;
	params.HeatPercentage = HeatPercentage;
	params.Overheated = Overheated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatlingGun_Overheat.GatlingGun_Overheat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGatlingGun_Overheat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GatlingGun_Overheat.GatlingGun_Overheat_C.Construct");

	UGatlingGun_Overheat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatlingGun_Overheat.GatlingGun_Overheat_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGatlingGun_Overheat_C::SetProgress(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatlingGun_Overheat.GatlingGun_Overheat_C.SetProgress");

	UGatlingGun_Overheat_C_SetProgress_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GatlingGun_Overheat.GatlingGun_Overheat_C.ExecuteUbergraph_GatlingGun_Overheat
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGatlingGun_Overheat_C::ExecuteUbergraph_GatlingGun_Overheat(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GatlingGun_Overheat.GatlingGun_Overheat_C.ExecuteUbergraph_GatlingGun_Overheat");

	UGatlingGun_Overheat_C_ExecuteUbergraph_GatlingGun_Overheat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
