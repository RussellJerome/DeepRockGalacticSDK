// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_AmmoCount_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_AmmoCount.HUD_AmmoCount_C.OnTotalChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Total                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_AmmoCount_C::OnTotalChanged(int* Total)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount.HUD_AmmoCount_C.OnTotalChanged");

	UHUD_AmmoCount_C_OnTotalChanged_Params params;
	params.Total = Total;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_AmmoCount.HUD_AmmoCount_C.OnAmountChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_AmmoCount_C::OnAmountChanged(int* count)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount.HUD_AmmoCount_C.OnAmountChanged");

	UHUD_AmmoCount_C_OnAmountChanged_Params params;
	params.count = count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_AmmoCount.HUD_AmmoCount_C.OnVisibleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          showClipCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_AmmoCount_C::OnVisibleChanged(bool* Visible, bool* showClipCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount.HUD_AmmoCount_C.OnVisibleChanged");

	UHUD_AmmoCount_C_OnVisibleChanged_Params params;
	params.Visible = Visible;
	params.showClipCount = showClipCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_AmmoCount.HUD_AmmoCount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_AmmoCount_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount.HUD_AmmoCount_C.Construct");

	UHUD_AmmoCount_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_AmmoCount.HUD_AmmoCount_C.OnTotalVisibleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_AmmoCount_C::OnTotalVisibleChanged(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount.HUD_AmmoCount_C.OnTotalVisibleChanged");

	UHUD_AmmoCount_C_OnTotalVisibleChanged_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_AmmoCount.HUD_AmmoCount_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_AmmoCount_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount.HUD_AmmoCount_C.PreConstruct");

	UHUD_AmmoCount_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_AmmoCount.HUD_AmmoCount_C.ExecuteUbergraph_HUD_AmmoCount
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_AmmoCount_C::ExecuteUbergraph_HUD_AmmoCount(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount.HUD_AmmoCount_C.ExecuteUbergraph_HUD_AmmoCount");

	UHUD_AmmoCount_C_ExecuteUbergraph_HUD_AmmoCount_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
