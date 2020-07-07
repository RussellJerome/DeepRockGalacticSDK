// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Endscreen_Lamp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.UpdateLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Endscreen_Lamp_C::UpdateLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.UpdateLights");

	ABP_Endscreen_Lamp_C_UpdateLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Endscreen_Lamp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.UserConstructionScript");

	ABP_Endscreen_Lamp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Endscreen_Lamp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.ReceiveBeginPlay");

	ABP_Endscreen_Lamp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.ExecuteUbergraph_BP_Endscreen_Lamp
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Endscreen_Lamp_C::ExecuteUbergraph_BP_Endscreen_Lamp(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.ExecuteUbergraph_BP_Endscreen_Lamp");

	ABP_Endscreen_Lamp_C_ExecuteUbergraph_BP_Endscreen_Lamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
