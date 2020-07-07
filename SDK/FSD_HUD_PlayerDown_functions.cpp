// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_PlayerDown_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_PlayerDown.HUD_PlayerDown_C.GetCycleCameraVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UHUD_PlayerDown_C::GetCycleCameraVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerDown.HUD_PlayerDown_C.GetCycleCameraVisibility");

	UHUD_PlayerDown_C_GetCycleCameraVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD_PlayerDown.HUD_PlayerDown_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_PlayerDown_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerDown.HUD_PlayerDown_C.Construct");

	UHUD_PlayerDown_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerDown.HUD_PlayerDown_C.OnDownCameraTargetChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerDown_C::OnDownCameraTargetChanged(class APlayerCharacter** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerDown.HUD_PlayerDown_C.OnDownCameraTargetChanged");

	UHUD_PlayerDown_C_OnDownCameraTargetChanged_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerDown.HUD_PlayerDown_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerDown_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerDown.HUD_PlayerDown_C.PreConstruct");

	UHUD_PlayerDown_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerDown.HUD_PlayerDown_C.End Player Down
// (BlueprintCallable, BlueprintEvent)

void UHUD_PlayerDown_C::End_Player_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerDown.HUD_PlayerDown_C.End Player Down");

	UHUD_PlayerDown_C_End_Player_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerDown.HUD_PlayerDown_C.ReceiveNewVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESlateVisibility*              NewVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerDown_C::ReceiveNewVisibility(ESlateVisibility* NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerDown.HUD_PlayerDown_C.ReceiveNewVisibility");

	UHUD_PlayerDown_C_ReceiveNewVisibility_Params params;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerDown.HUD_PlayerDown_C.ExecuteUbergraph_HUD_PlayerDown
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerDown_C::ExecuteUbergraph_HUD_PlayerDown(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerDown.HUD_PlayerDown_C.ExecuteUbergraph_HUD_PlayerDown");

	UHUD_PlayerDown_C_ExecuteUbergraph_HUD_PlayerDown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
