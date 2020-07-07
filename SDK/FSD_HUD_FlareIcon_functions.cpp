// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_FlareIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_FlareIcon.HUD_FlareIcon_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_FlareIcon_C::SetProgress(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_FlareIcon.HUD_FlareIcon_C.SetProgress");

	UHUD_FlareIcon_C_SetProgress_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_FlareIcon.HUD_FlareIcon_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_FlareIcon_C::Init(int* Index, class UInventoryComponent** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_FlareIcon.HUD_FlareIcon_C.Init");

	UHUD_FlareIcon_C_Init_Params params;
	params.Index = Index;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_FlareIcon.HUD_FlareIcon_C.OnFlareCountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_FlareIcon_C::OnFlareCountChanged(int* CurrentCount, class UInventoryComponent** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_FlareIcon.HUD_FlareIcon_C.OnFlareCountChanged");

	UHUD_FlareIcon_C_OnFlareCountChanged_Params params;
	params.CurrentCount = CurrentCount;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_FlareIcon.HUD_FlareIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_FlareIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_FlareIcon.HUD_FlareIcon_C.PreConstruct");

	UHUD_FlareIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_FlareIcon.HUD_FlareIcon_C.On Flare Production Finished
// (BlueprintCallable, BlueprintEvent)

void UHUD_FlareIcon_C::On_Flare_Production_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_FlareIcon.HUD_FlareIcon_C.On Flare Production Finished");

	UHUD_FlareIcon_C_On_Flare_Production_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_FlareIcon.HUD_FlareIcon_C.ExecuteUbergraph_HUD_FlareIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_FlareIcon_C::ExecuteUbergraph_HUD_FlareIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_FlareIcon.HUD_FlareIcon_C.ExecuteUbergraph_HUD_FlareIcon");

	UHUD_FlareIcon_C_ExecuteUbergraph_HUD_FlareIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
