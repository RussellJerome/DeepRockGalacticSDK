// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_SCREEN_CharacterSelection_Clean_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USCREEN_CharacterSelection_Clean_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnKeyDown");

	USCREEN_CharacterSelection_Clean_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply USCREEN_CharacterSelection_Clean_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnKeyUp");

	USCREEN_CharacterSelection_Clean_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnCloseMenuReleased
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::OnCloseMenuReleased(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnCloseMenuReleased");

	USCREEN_CharacterSelection_Clean_C_OnCloseMenuReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.GetSelectedClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* USCREEN_CharacterSelection_Clean_C::GetSelectedClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.GetSelectedClass");

	USCREEN_CharacterSelection_Clean_C_GetSelectedClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE
// (BlueprintCallable, BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE");

	USCREEN_CharacterSelection_Clean_C_OnFailure_0D1BB19C4CA8D7117BC6A688077A0BDE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE
// (BlueprintCallable, BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE");

	USCREEN_CharacterSelection_Clean_C_OnSuccess_0D1BB19C4CA8D7117BC6A688077A0BDE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnCharacterSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnCharacterSelected__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnCharacterSelected__DelegateSignature");

	USCREEN_CharacterSelection_Clean_C_BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_2_OnCharacterSelected__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnCharacterHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnCharacterHovered__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnCharacterHovered__DelegateSignature");

	USCREEN_CharacterSelection_Clean_C_BndEvt__CharSelect_HeroSelect_K2Node_ComponentBoundEvent_3_OnCharacterHovered__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnInputSourceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputSource*                  InputSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::OnInputSourceChanged(EInputSource* InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnInputSourceChanged");

	USCREEN_CharacterSelection_Clean_C_OnInputSourceChanged_Params params;
	params.InputSource = InputSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSelectedCharacterChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 NewCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::OnSelectedCharacterChanged_Event(class UClass** NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnSelectedCharacterChanged_Event");

	USCREEN_CharacterSelection_Clean_C_OnSelectedCharacterChanged_Event_Params params;
	params.NewCharacter = NewCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.PreConstruct");

	USCREEN_CharacterSelection_Clean_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.UpdateCharacterDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::UpdateCharacterDescription(class UClass** CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.UpdateCharacterDescription");

	USCREEN_CharacterSelection_Clean_C_UpdateCharacterDescription_Params params;
	params.CharacterClass = CharacterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ReceiveNewVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility*              NewVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::ReceiveNewVisibility(ESlateVisibility* NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ReceiveNewVisibility");

	USCREEN_CharacterSelection_Clean_C_ReceiveNewVisibility_Params params;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnShown
// (Event, Public, BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnShown");

	USCREEN_CharacterSelection_Clean_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Show
// (BlueprintCallable, BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Show");

	USCREEN_CharacterSelection_Clean_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnClosed
// (Event, Public, BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnClosed");

	USCREEN_CharacterSelection_Clean_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BackPressed
// (BlueprintCallable, BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::BackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BackPressed");

	USCREEN_CharacterSelection_Clean_C_BackPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CreateMovie
// (BlueprintCallable, BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::CreateMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CreateMovie");

	USCREEN_CharacterSelection_Clean_C_CreateMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Construct");

	USCREEN_CharacterSelection_Clean_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.StopMovie
// (BlueprintCallable, BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::StopMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.StopMovie");

	USCREEN_CharacterSelection_Clean_C_StopMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	USCREEN_CharacterSelection_Clean_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ReceiveCloseCommand
// (Event, Protected, BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::ReceiveCloseCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ReceiveCloseCommand");

	USCREEN_CharacterSelection_Clean_C_ReceiveCloseCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnNewLoadout
// (BlueprintCallable, BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::OnNewLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.OnNewLoadout");

	USCREEN_CharacterSelection_Clean_C_OnNewLoadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ExecuteUbergraph_SCREEN_CharacterSelection_Clean
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USCREEN_CharacterSelection_Clean_C::ExecuteUbergraph_SCREEN_CharacterSelection_Clean(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.ExecuteUbergraph_SCREEN_CharacterSelection_Clean");

	USCREEN_CharacterSelection_Clean_C_ExecuteUbergraph_SCREEN_CharacterSelection_Clean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Back__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.Back__DelegateSignature");

	USCREEN_CharacterSelection_Clean_C_Back__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CharacterSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USCREEN_CharacterSelection_Clean_C::CharacterSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SCREEN_CharacterSelection_Clean.SCREEN_CharacterSelection_Clean_C.CharacterSelected__DelegateSignature");

	USCREEN_CharacterSelection_Clean_C_CharacterSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
