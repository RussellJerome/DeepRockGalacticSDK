// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlasmaTrail_LineCutter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlasmaTrail_LineCutter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.ReceiveBeginPlay");

	ABP_PlasmaTrail_LineCutter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.SetLineWidth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlasmaTrail_LineCutter_C::SetLineWidth(float* Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.SetLineWidth");

	ABP_PlasmaTrail_LineCutter_C_SetLineWidth_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.ExecuteUbergraph_BP_PlasmaTrail_LineCutter
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlasmaTrail_LineCutter_C::ExecuteUbergraph_BP_PlasmaTrail_LineCutter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlasmaTrail_LineCutter.BP_PlasmaTrail_LineCutter_C.ExecuteUbergraph_BP_PlasmaTrail_LineCutter");

	ABP_PlasmaTrail_LineCutter_C_ExecuteUbergraph_BP_PlasmaTrail_LineCutter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
