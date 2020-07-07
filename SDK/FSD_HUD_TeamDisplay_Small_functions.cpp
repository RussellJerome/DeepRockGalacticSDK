// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_TeamDisplay_Small_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_TeamDisplay_Small_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.Construct");

	UHUD_TeamDisplay_Small_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.OnPlayerJoined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_Small_C::OnPlayerJoined(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.OnPlayerJoined");

	UHUD_TeamDisplay_Small_C_OnPlayerJoined_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_Small_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.PreConstruct");

	UHUD_TeamDisplay_Small_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.ExecuteUbergraph_HUD_TeamDisplay_Small
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TeamDisplay_Small_C::ExecuteUbergraph_HUD_TeamDisplay_Small(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.ExecuteUbergraph_HUD_TeamDisplay_Small");

	UHUD_TeamDisplay_Small_C_ExecuteUbergraph_HUD_TeamDisplay_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
