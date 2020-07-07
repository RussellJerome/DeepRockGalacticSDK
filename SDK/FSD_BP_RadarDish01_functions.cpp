// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_RadarDish01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RadarDish01.BP_RadarDish01_C.SetRotationRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URotatingMovementComponent** self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         RotationRate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RadarDish01_C::SetRotationRate(class URotatingMovementComponent** self2, float* RotationRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadarDish01.BP_RadarDish01_C.SetRotationRate");

	ABP_RadarDish01_C_SetRotationRate_Params params;
	params.self2 = self2;
	params.RotationRate = RotationRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadarDish01.BP_RadarDish01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RadarDish01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadarDish01.BP_RadarDish01_C.ReceiveBeginPlay");

	ABP_RadarDish01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadarDish01.BP_RadarDish01_C.ExecuteUbergraph_BP_RadarDish01
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RadarDish01_C::ExecuteUbergraph_BP_RadarDish01(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadarDish01.BP_RadarDish01_C.ExecuteUbergraph_BP_RadarDish01");

	ABP_RadarDish01_C_ExecuteUbergraph_BP_RadarDish01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
