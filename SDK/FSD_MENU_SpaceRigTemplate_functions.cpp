// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MENU_SpaceRigTemplate_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.IsCloseButtonVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMENU_SpaceRigTemplate_C::IsCloseButtonVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.IsCloseButtonVisible");

	UMENU_SpaceRigTemplate_C_IsCloseButtonVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetBackMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Close_Is_Back                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_SpaceRigTemplate_C::SetBackMode(bool* Close_Is_Back)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetBackMode");

	UMENU_SpaceRigTemplate_C_SetBackMode_Params params;
	params.Close_Is_Back = Close_Is_Back;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.UpdatePlayerCount
// (Public, BlueprintCallable, BlueprintEvent)

void UMENU_SpaceRigTemplate_C::UpdatePlayerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.UpdatePlayerCount");

	UMENU_SpaceRigTemplate_C_UpdatePlayerCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetCloseButtonVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowCloseButton                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_SpaceRigTemplate_C::SetCloseButtonVisible(bool* ShowCloseButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetCloseButtonVisible");

	UMENU_SpaceRigTemplate_C_SetCloseButtonVisible_Params params;
	params.ShowCloseButton = ShowCloseButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_SpaceRigTemplate_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PreConstruct");

	UMENU_SpaceRigTemplate_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMENU_SpaceRigTemplate_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Construct");

	UMENU_SpaceRigTemplate_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UMENU_SpaceRigTemplate_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Refresh");

	UMENU_SpaceRigTemplate_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_SpaceRigTemplate_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");

	UMENU_SpaceRigTemplate_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnCreditsChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Credits                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_SpaceRigTemplate_C::OnCreditsChanged_Event(int* Credits)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnCreditsChanged_Event");

	UMENU_SpaceRigTemplate_C_OnCreditsChanged_Event_Params params;
	params.Credits = Credits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerJoined_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_SpaceRigTemplate_C::OnPlayerJoined_Event(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerJoined_Event");

	UMENU_SpaceRigTemplate_C_OnPlayerJoined_Event_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerLeave_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_SpaceRigTemplate_C::OnPlayerLeave_Event(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerLeave_Event");

	UMENU_SpaceRigTemplate_C_OnPlayerLeave_Event_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 NewCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_SpaceRigTemplate_C::OnSelectedCharacterChanged_Event(class UClass** NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged_Event");

	UMENU_SpaceRigTemplate_C_OnSelectedCharacterChanged_Event_Params params;
	params.NewCharacter = NewCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Setup Player Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState**           NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_SpaceRigTemplate_C::Setup_Player_Events(class APlayerState** NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Setup Player Events");

	UMENU_SpaceRigTemplate_C_Setup_Player_Events_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 NewCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_SpaceRigTemplate_C::OnSelectedCharacterChanged(class UClass** NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged");

	UMENU_SpaceRigTemplate_C_OnSelectedCharacterChanged_Params params;
	params.NewCharacter = NewCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Click Close Button
// (BlueprintCallable, BlueprintEvent)

void UMENU_SpaceRigTemplate_C::Click_Close_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Click Close Button");

	UMENU_SpaceRigTemplate_C_Click_Close_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PlayFadeIn
// (BlueprintCallable, BlueprintEvent)

void UMENU_SpaceRigTemplate_C::PlayFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PlayFadeIn");

	UMENU_SpaceRigTemplate_C_PlayFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.FadeFinished
// (BlueprintCallable, BlueprintEvent)

void UMENU_SpaceRigTemplate_C::FadeFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.FadeFinished");

	UMENU_SpaceRigTemplate_C_FadeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.ExecuteUbergraph_MENU_SpaceRigTemplate
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_SpaceRigTemplate_C::ExecuteUbergraph_MENU_SpaceRigTemplate(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.ExecuteUbergraph_MENU_SpaceRigTemplate");

	UMENU_SpaceRigTemplate_C_ExecuteUbergraph_MENU_SpaceRigTemplate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnBackClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMENU_SpaceRigTemplate_C::OnBackClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnBackClicked__DelegateSignature");

	UMENU_SpaceRigTemplate_C_OnBackClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnClosedClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMENU_SpaceRigTemplate_C::OnClosedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnClosedClicked__DelegateSignature");

	UMENU_SpaceRigTemplate_C_OnClosedClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
