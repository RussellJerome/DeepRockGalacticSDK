// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Switch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Switch.BP_Switch_C.SelectNext
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Switch_C::SelectNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Switch.BP_Switch_C.SelectNext");

	ABP_Switch_C_SelectNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Switch.BP_Switch_C.SelectPrevious
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Switch_C::SelectPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Switch.BP_Switch_C.SelectPrevious");

	ABP_Switch_C_SelectPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Switch.BP_Switch_C.RegisterSwitch
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Switch_C::RegisterSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Switch.BP_Switch_C.RegisterSwitch");

	ABP_Switch_C_RegisterSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Switch.BP_Switch_C.SetSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Switch_C::SetSelection(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Switch.BP_Switch_C.SetSelection");

	ABP_Switch_C_SetSelection_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Switch.BP_Switch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Switch_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Switch.BP_Switch_C.ReceiveBeginPlay");

	ABP_Switch_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Switch.BP_Switch_C.OnSetNodeVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Switch_C::OnSetNodeVisibility(bool* NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Switch.BP_Switch_C.OnSetNodeVisibility");

	ABP_Switch_C_OnSetNodeVisibility_Params params;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Switch.BP_Switch_C.ExecuteUbergraph_BP_Switch
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Switch_C::ExecuteUbergraph_BP_Switch(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Switch.BP_Switch_C.ExecuteUbergraph_BP_Switch");

	ABP_Switch_C_ExecuteUbergraph_BP_Switch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
