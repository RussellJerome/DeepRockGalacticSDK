// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_CharacterRetirement_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.StopAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent**        InAudioComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWND_CharacterRetirement_C::StopAudio(class UAudioComponent** InAudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.StopAudio");

	UWND_CharacterRetirement_C_StopAudio_Params params;
	params.InAudioComponent = InAudioComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_CharacterRetirement.WND_CharacterRetirement_C.IsAudioFinished
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAudioComponent**        InAudioComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWND_CharacterRetirement_C::IsAudioFinished(class UAudioComponent** InAudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.IsAudioFinished");

	UWND_CharacterRetirement_C_IsAudioFinished_Params params;
	params.InAudioComponent = InAudioComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WND_CharacterRetirement.WND_CharacterRetirement_C.BuildCostList
// (Public, BlueprintCallable, BlueprintEvent)

void UWND_CharacterRetirement_C::BuildCostList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.BuildCostList");

	UWND_CharacterRetirement_C_BuildCostList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_CharacterRetirement_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWND_CharacterRetirement_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_CharacterRetirement.WND_CharacterRetirement_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerCharacterID**     characterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_CharacterRetirement_C::SetData(class UPlayerCharacterID** characterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.SetData");

	UWND_CharacterRetirement_C_SetData_Params params;
	params.characterID = characterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_CharacterRetirement_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWND_CharacterRetirement_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_CharacterRetirement.WND_CharacterRetirement_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_CharacterRetirement_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.PreConstruct");

	UWND_CharacterRetirement_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnShown
// (Event, Public, BlueprintEvent)

void UWND_CharacterRetirement_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnShown");

	UWND_CharacterRetirement_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_CharacterRetirement.WND_CharacterRetirement_C.HideMouseCursor
// (BlueprintCallable, BlueprintEvent)

void UWND_CharacterRetirement_C::HideMouseCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.HideMouseCursor");

	UWND_CharacterRetirement_C_HideMouseCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature
// (BlueprintEvent)

void UWND_CharacterRetirement_C::BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature");

	UWND_CharacterRetirement_C_BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_CharacterRetirement.WND_CharacterRetirement_C.Retire
// (BlueprintCallable, BlueprintEvent)

void UWND_CharacterRetirement_C::Retire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.Retire");

	UWND_CharacterRetirement_C_Retire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_CharacterRetirement.WND_CharacterRetirement_C.FadeInBackground
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_CharacterRetirement_C::FadeInBackground(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.FadeInBackground");

	UWND_CharacterRetirement_C_FadeInBackground_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_CharacterRetirement.WND_CharacterRetirement_C.Stop Character Audio
// (BlueprintCallable, BlueprintEvent)

void UWND_CharacterRetirement_C::Stop_Character_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.Stop Character Audio");

	UWND_CharacterRetirement_C_Stop_Character_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnClosed
// (Event, Public, BlueprintEvent)

void UWND_CharacterRetirement_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnClosed");

	UWND_CharacterRetirement_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnRewardsClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWindowWidget**          Window                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWND_CharacterRetirement_C::OnRewardsClosed(class UWindowWidget** Window)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnRewardsClosed");

	UWND_CharacterRetirement_C_OnRewardsClosed_Params params;
	params.Window = Window;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_CharacterRetirement.WND_CharacterRetirement_C.ExecuteUbergraph_WND_CharacterRetirement
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_CharacterRetirement_C::ExecuteUbergraph_WND_CharacterRetirement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_CharacterRetirement.WND_CharacterRetirement_C.ExecuteUbergraph_WND_CharacterRetirement");

	UWND_CharacterRetirement_C_ExecuteUbergraph_WND_CharacterRetirement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
