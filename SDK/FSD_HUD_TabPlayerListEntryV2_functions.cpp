// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_TabPlayerListEntryV2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.UpdateStats
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHUD_TabPlayerListEntryV2_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.UpdateStats");

	UHUD_TabPlayerListEntryV2_C_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntryV2_C::Update(class AFSDPlayerState** State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.Update");

	UHUD_TabPlayerListEntryV2_C_Update_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntryV2_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.Tick");

	UHUD_TabPlayerListEntryV2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntryV2_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.PreConstruct");

	UHUD_TabPlayerListEntryV2_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.ShowInfoBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          shouldShow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntryV2_C::ShowInfoBar(bool* shouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.ShowInfoBar");

	UHUD_TabPlayerListEntryV2_C_ShowInfoBar_Params params;
	params.shouldShow = shouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.ExecuteUbergraph_HUD_TabPlayerListEntryV2
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TabPlayerListEntryV2_C::ExecuteUbergraph_HUD_TabPlayerListEntryV2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.ExecuteUbergraph_HUD_TabPlayerListEntryV2");

	UHUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
