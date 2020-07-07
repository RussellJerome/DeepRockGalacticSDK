// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_POPUP_KickPlayerConfirm_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPOPUP_KickPlayerConfirm_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.PreConstruct");

	UPOPUP_KickPlayerConfirm_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPOPUP_KickPlayerConfirm_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.Construct");

	UPOPUP_KickPlayerConfirm_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_C_1_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPOPUP_KickPlayerConfirm_C::BndEvt__Basic_CheckBox_C_1_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_C_1_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	UPOPUP_KickPlayerConfirm_C_BndEvt__Basic_CheckBox_C_1_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_AFK_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPOPUP_KickPlayerConfirm_C::BndEvt__Basic_CheckBox_AFK_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_AFK_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature");

	UPOPUP_KickPlayerConfirm_C_BndEvt__Basic_CheckBox_AFK_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_Private_K2Node_ComponentBoundEvent_16_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPOPUP_KickPlayerConfirm_C::BndEvt__Basic_CheckBox_Private_K2Node_ComponentBoundEvent_16_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__Basic_CheckBox_Private_K2Node_ComponentBoundEvent_16_OnCheckStateChanged__DelegateSignature");

	UPOPUP_KickPlayerConfirm_C_BndEvt__Basic_CheckBox_Private_K2Node_ComponentBoundEvent_16_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature
// (BlueprintEvent)

void UPOPUP_KickPlayerConfirm_C::BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature");

	UPOPUP_KickPlayerConfirm_C_BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_37_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.SetPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController**      Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPOPUP_KickPlayerConfirm_C::SetPlayer(class APlayerController** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.SetPlayer");

	UPOPUP_KickPlayerConfirm_C_SetPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature
// (BlueprintEvent)

void UPOPUP_KickPlayerConfirm_C::BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature");

	UPOPUP_KickPlayerConfirm_C_BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.ExecuteUbergraph_POPUP_KickPlayerConfirm
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPOPUP_KickPlayerConfirm_C::ExecuteUbergraph_POPUP_KickPlayerConfirm(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function POPUP_KickPlayerConfirm.POPUP_KickPlayerConfirm_C.ExecuteUbergraph_POPUP_KickPlayerConfirm");

	UPOPUP_KickPlayerConfirm_C_ExecuteUbergraph_POPUP_KickPlayerConfirm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
