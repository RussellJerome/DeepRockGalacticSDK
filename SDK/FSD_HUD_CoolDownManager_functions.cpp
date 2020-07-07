// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_CoolDownManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_CoolDownManager.HUD_CoolDownManager_C.GetOrCreateWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                CoolDownOwner                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCoolDownProgressStyle* CoolDownStyle                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UCoolDownProgressWidget* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_CoolDownManager_C::GetOrCreateWidget(class UObject** CoolDownOwner, struct FCoolDownProgressStyle* CoolDownStyle, class UCoolDownProgressWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CoolDownManager.HUD_CoolDownManager_C.GetOrCreateWidget");

	UHUD_CoolDownManager_C_GetOrCreateWidget_Params params;
	params.CoolDownOwner = CoolDownOwner;
	params.CoolDownStyle = CoolDownStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function HUD_CoolDownManager.HUD_CoolDownManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_CoolDownManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CoolDownManager.HUD_CoolDownManager_C.Construct");

	UHUD_CoolDownManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CoolDownManager.HUD_CoolDownManager_C.OnCoolDownProgress_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                CoolDownObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCoolDownProgressStyle* Style                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CoolDownManager_C::OnCoolDownProgress_Event(class UObject** CoolDownObject, struct FCoolDownProgressStyle* Style, float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CoolDownManager.HUD_CoolDownManager_C.OnCoolDownProgress_Event");

	UHUD_CoolDownManager_C_OnCoolDownProgress_Event_Params params;
	params.CoolDownObject = CoolDownObject;
	params.Style = Style;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CoolDownManager.HUD_CoolDownManager_C.ExecuteUbergraph_HUD_CoolDownManager
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CoolDownManager_C::ExecuteUbergraph_HUD_CoolDownManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CoolDownManager.HUD_CoolDownManager_C.ExecuteUbergraph_HUD_CoolDownManager");

	UHUD_CoolDownManager_C_ExecuteUbergraph_HUD_CoolDownManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
