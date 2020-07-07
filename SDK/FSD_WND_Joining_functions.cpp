// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_Joining_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_Joining.WND_Joining_C.BeginFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Joining_C::BeginFadeOut(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Joining.WND_Joining_C.BeginFadeOut");

	UWND_Joining_C_BeginFadeOut_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Joining.WND_Joining_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWND_Joining_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Joining.WND_Joining_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UWND_Joining_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Joining.WND_Joining_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Joining_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Joining.WND_Joining_C.PreConstruct");

	UWND_Joining_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Joining.WND_Joining_C.HideCancel
// (BlueprintCallable, BlueprintEvent)

void UWND_Joining_C::HideCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Joining.WND_Joining_C.HideCancel");

	UWND_Joining_C_HideCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Joining.WND_Joining_C.OnShown
// (Event, Public, BlueprintEvent)

void UWND_Joining_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Joining.WND_Joining_C.OnShown");

	UWND_Joining_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Joining.WND_Joining_C.Close
// (BlueprintCallable, BlueprintEvent)

void UWND_Joining_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Joining.WND_Joining_C.Close");

	UWND_Joining_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_Joining.WND_Joining_C.ExecuteUbergraph_WND_Joining
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_Joining_C::ExecuteUbergraph_WND_Joining(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Joining.WND_Joining_C.ExecuteUbergraph_WND_Joining");

	UWND_Joining_C_ExecuteUbergraph_WND_Joining_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
