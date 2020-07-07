// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ChaCus_ClassSelector_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.SetSwitchButtonState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ClassSelector_C::SetSwitchButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.SetSwitchButtonState");

	UITM_ChaCus_ClassSelector_C_SetSwitchButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.GetPrevCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ClassSelector_C::GetPrevCharacter(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.GetPrevCharacter");

	UITM_ChaCus_ClassSelector_C_GetPrevCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.GetNextCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ClassSelector_C::GetNextCharacter(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.GetNextCharacter");

	UITM_ChaCus_ClassSelector_C_GetNextCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.GetBPGameState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_GameState_C*         GameState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ClassSelector_C::GetBPGameState(class ABP_GameState_C** GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.GetBPGameState");

	UITM_ChaCus_ClassSelector_C_GetBPGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameState != nullptr)
		*GameState = params.GameState;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.SetCharacterInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 playerClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ClassSelector_C::SetCharacterInfo(class UClass** playerClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.SetCharacterInfo");

	UITM_ChaCus_ClassSelector_C_SetCharacterInfo_Params params;
	params.playerClass = playerClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ClassSelector_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.PreConstruct");

	UITM_ChaCus_ClassSelector_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                CategoryID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ClassSelector_C::SetData(class UClass** Character, class UObject** CategoryID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.SetData");

	UITM_ChaCus_ClassSelector_C_SetData_Params params;
	params.Character = Character;
	params.CategoryID = CategoryID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ChaCus_ClassSelector_C::BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UITM_ChaCus_ClassSelector_C_BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ChaCus_ClassSelector_C::BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UITM_ChaCus_ClassSelector_C_BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.SelectPrev
// (BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ClassSelector_C::SelectPrev()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.SelectPrev");

	UITM_ChaCus_ClassSelector_C_SelectPrev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.SelectNext
// (BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ClassSelector_C::SelectNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.SelectNext");

	UITM_ChaCus_ClassSelector_C_SelectNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.SwitchToCharacter
// (BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ClassSelector_C::SwitchToCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.SwitchToCharacter");

	UITM_ChaCus_ClassSelector_C_SwitchToCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_ChaCus_ClassSelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.Construct");

	UITM_ChaCus_ClassSelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.CharacterChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 NewCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ClassSelector_C::CharacterChanged(class UClass** NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.CharacterChanged");

	UITM_ChaCus_ClassSelector_C_CharacterChanged_Params params;
	params.NewCharacter = NewCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_ChaCus_ClassSelector_C::BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UITM_ChaCus_ClassSelector_C_BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.UpdateNotification
// (BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ClassSelector_C::UpdateNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.UpdateNotification");

	UITM_ChaCus_ClassSelector_C_UpdateNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.ExecuteUbergraph_ITM_ChaCus_ClassSelector
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ClassSelector_C::ExecuteUbergraph_ITM_ChaCus_ClassSelector(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.ExecuteUbergraph_ITM_ChaCus_ClassSelector");

	UITM_ChaCus_ClassSelector_C_ExecuteUbergraph_ITM_ChaCus_ClassSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.OnCharacterChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ClassSelector_C::OnCharacterChanged__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ClassSelector.ITM_ChaCus_ClassSelector_C.OnCharacterChanged__DelegateSignature");

	UITM_ChaCus_ClassSelector_C_OnCharacterChanged__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
