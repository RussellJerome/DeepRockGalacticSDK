// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_CoolDownBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_CoolDownBar.HUD_CoolDownBar_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCoolDownItemAggregator** Cooldown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_CoolDownBar_C::Initialize(class UCoolDownItemAggregator** Cooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.Initialize");

	UHUD_CoolDownBar_C_Initialize_Params params;
	params.Cooldown = Cooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CoolDownBar.HUD_CoolDownBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_CoolDownBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.Construct");

	UHUD_CoolDownBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CoolDownBar.HUD_CoolDownBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CoolDownBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.Tick");

	UHUD_CoolDownBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CoolDownBar.HUD_CoolDownBar_C.ProgressSound
// (BlueprintCallable, BlueprintEvent)

void UHUD_CoolDownBar_C::ProgressSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.ProgressSound");

	UHUD_CoolDownBar_C_ProgressSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CoolDownBar.HUD_CoolDownBar_C.ExecuteUbergraph_HUD_CoolDownBar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CoolDownBar_C::ExecuteUbergraph_HUD_CoolDownBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.ExecuteUbergraph_HUD_CoolDownBar");

	UHUD_CoolDownBar_C_ExecuteUbergraph_HUD_CoolDownBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
