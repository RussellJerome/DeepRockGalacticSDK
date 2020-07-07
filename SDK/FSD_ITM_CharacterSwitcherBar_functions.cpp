// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CharacterSwitcherBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.CheckArmorUnlocks
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_CharacterSwitcherBar_C::CheckArmorUnlocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.CheckArmorUnlocks");

	UITM_CharacterSwitcherBar_C_CheckArmorUnlocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GotoNext
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Next                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          PlaySound                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterSwitcherBar_C::GotoNext(bool* Next, bool* PlaySound)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GotoNext");

	UITM_CharacterSwitcherBar_C_GotoNext_Params params;
	params.Next = Next;
	params.PlaySound = PlaySound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetSwitchButtonState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_CharacterSwitcherBar_C::SetSwitchButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetSwitchButtonState");

	UITM_CharacterSwitcherBar_C_SetSwitchButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetPrevCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterSwitcherBar_C::GetPrevCharacter(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetPrevCharacter");

	UITM_CharacterSwitcherBar_C_GetPrevCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetNextCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterSwitcherBar_C::GetNextCharacter(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetNextCharacter");

	UITM_CharacterSwitcherBar_C_GetNextCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetBPGameState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_GameState_C*         GameState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterSwitcherBar_C::GetBPGameState(class ABP_GameState_C** GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetBPGameState");

	UITM_CharacterSwitcherBar_C_GetBPGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameState != nullptr)
		*GameState = params.GameState;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetCharacterInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 playerClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterSwitcherBar_C::SetCharacterInfo(class UClass** playerClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetCharacterInfo");

	UITM_CharacterSwitcherBar_C_SetCharacterInfo_Params params;
	params.playerClass = playerClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SelectPrev
// (BlueprintCallable, BlueprintEvent)

void UITM_CharacterSwitcherBar_C::SelectPrev()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SelectPrev");

	UITM_CharacterSwitcherBar_C_SelectPrev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SelectNext
// (BlueprintCallable, BlueprintEvent)

void UITM_CharacterSwitcherBar_C::SelectNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SelectNext");

	UITM_CharacterSwitcherBar_C_SelectNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SwitchToCharacter
// (BlueprintCallable, BlueprintEvent)

void UITM_CharacterSwitcherBar_C::SwitchToCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SwitchToCharacter");

	UITM_CharacterSwitcherBar_C_SwitchToCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_CharacterSwitcherBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.Construct");

	UITM_CharacterSwitcherBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.CharacterChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 NewCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterSwitcherBar_C::CharacterChanged(class UClass** NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.CharacterChanged");

	UITM_CharacterSwitcherBar_C_CharacterChanged_Params params;
	params.NewCharacter = NewCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_CharacterSwitcherBar_C::BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UITM_CharacterSwitcherBar_C_BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_CharacterSwitcherBar_C::BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UITM_CharacterSwitcherBar_C_BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_CharacterSwitcherBar_C::BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UITM_CharacterSwitcherBar_C_BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.UpdateNotification
// (BlueprintCallable, BlueprintEvent)

void UITM_CharacterSwitcherBar_C::UpdateNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.UpdateNotification");

	UITM_CharacterSwitcherBar_C_UpdateNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterSwitcherBar_C::SetData(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetData");

	UITM_CharacterSwitcherBar_C_SetData_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterSwitcherBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.PreConstruct");

	UITM_CharacterSwitcherBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.ExecuteUbergraph_ITM_CharacterSwitcherBar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterSwitcherBar_C::ExecuteUbergraph_ITM_CharacterSwitcherBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.ExecuteUbergraph_ITM_CharacterSwitcherBar");

	UITM_CharacterSwitcherBar_C_ExecuteUbergraph_ITM_CharacterSwitcherBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.OnCharacterChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CharacterSwitcherBar_C::OnCharacterChanged__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.OnCharacterChanged__DelegateSignature");

	UITM_CharacterSwitcherBar_C_OnCharacterChanged__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
