// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SpinningFan01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpinningFan01.BP_SpinningFan01_C.SetSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpinningFan01_C::SetSpeed(float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpinningFan01.BP_SpinningFan01_C.SetSpeed");

	ABP_SpinningFan01_C_SetSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpinningFan01.BP_SpinningFan01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpinningFan01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpinningFan01.BP_SpinningFan01_C.ReceiveBeginPlay");

	ABP_SpinningFan01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpinningFan01.BP_SpinningFan01_C.ExecuteUbergraph_BP_SpinningFan01
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpinningFan01_C::ExecuteUbergraph_BP_SpinningFan01(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpinningFan01.BP_SpinningFan01_C.ExecuteUbergraph_BP_SpinningFan01");

	ABP_SpinningFan01_C_ExecuteUbergraph_BP_SpinningFan01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
