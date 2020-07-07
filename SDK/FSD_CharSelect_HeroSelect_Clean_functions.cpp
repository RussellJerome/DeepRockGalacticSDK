// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_CharSelect_HeroSelect_Clean_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCharSelect_HeroSelect_Clean_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnKeyUp");

	UCharSelect_HeroSelect_Clean_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCharSelect_HeroSelect_Clean_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnKeyDown");

	UCharSelect_HeroSelect_Clean_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.SetSelectedIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Clean_C::SetSelectedIndex(int* Index, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.SetSelectedIndex");

	UCharSelect_HeroSelect_Clean_C_SetSelectedIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.GetSelectedIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Clean_C::GetSelectedIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.GetSelectedIndex");

	UCharSelect_HeroSelect_Clean_C_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.HandleKeyEvent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          IsDown                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

struct FEventReply UCharSelect_HeroSelect_Clean_C::HandleKeyEvent(bool* IsDown, struct FKeyEvent* InKeyEvent, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.HandleKeyEvent");

	UCharSelect_HeroSelect_Clean_C_HandleKeyEvent_Params params;
	params.IsDown = IsDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InKeyEvent != nullptr)
		*InKeyEvent = params.InKeyEvent;
	if (Handled != nullptr)
		*Handled = params.Handled;

	return params.ReturnValue;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Select
// (Public, BlueprintCallable, BlueprintEvent)

void UCharSelect_HeroSelect_Clean_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Select");

	UCharSelect_HeroSelect_Clean_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Prev
// (Public, BlueprintCallable, BlueprintEvent)

void UCharSelect_HeroSelect_Clean_C::Prev()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Prev");

	UCharSelect_HeroSelect_Clean_C_Prev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Next
// (Public, BlueprintCallable, BlueprintEvent)

void UCharSelect_HeroSelect_Clean_C::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Next");

	UCharSelect_HeroSelect_Clean_C_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnCharacterSelected_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Clean_C::OnCharacterSelected_Event(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnCharacterSelected_Event");

	UCharSelect_HeroSelect_Clean_C_OnCharacterSelected_Event_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Update
// (BlueprintCallable, BlueprintEvent)

void UCharSelect_HeroSelect_Clean_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.Update");

	UCharSelect_HeroSelect_Clean_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.BndEvt__BTN_Select_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCharSelect_HeroSelect_Clean_C::BndEvt__BTN_Select_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.BndEvt__BTN_Select_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UCharSelect_HeroSelect_Clean_C_BndEvt__BTN_Select_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnHovered_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Clean_C::OnHovered_Event_1(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnHovered_Event_1");

	UCharSelect_HeroSelect_Clean_C_OnHovered_Event_1_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnSelect
// (BlueprintCallable, BlueprintEvent)

void UCharSelect_HeroSelect_Clean_C::OnSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnSelect");

	UCharSelect_HeroSelect_Clean_C_OnSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.RetirementHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Clean_C::RetirementHovered(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.RetirementHovered");

	UCharSelect_HeroSelect_Clean_C_RetirementHovered_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.RetirementUnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Clean_C::RetirementUnHovered(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.RetirementUnHovered");

	UCharSelect_HeroSelect_Clean_C_RetirementUnHovered_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.RetireCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Clean_C::RetireCharacter(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.RetireCharacter");

	UCharSelect_HeroSelect_Clean_C_RetireCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.ExecuteUbergraph_CharSelect_HeroSelect_Clean
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Clean_C::ExecuteUbergraph_CharSelect_HeroSelect_Clean(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.ExecuteUbergraph_CharSelect_HeroSelect_Clean");

	UCharSelect_HeroSelect_Clean_C_ExecuteUbergraph_CharSelect_HeroSelect_Clean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnRetireCharacter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Clean_C::OnRetireCharacter__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnRetireCharacter__DelegateSignature");

	UCharSelect_HeroSelect_Clean_C_OnRetireCharacter__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnRetirementUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Clean_C::OnRetirementUnhovered__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnRetirementUnhovered__DelegateSignature");

	UCharSelect_HeroSelect_Clean_C_OnRetirementUnhovered__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnRetirementHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Clean_C::OnRetirementHovered__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnRetirementHovered__DelegateSignature");

	UCharSelect_HeroSelect_Clean_C_OnRetirementHovered__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnCharacterHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Clean_C::OnCharacterHovered__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnCharacterHovered__DelegateSignature");

	UCharSelect_HeroSelect_Clean_C_OnCharacterHovered__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnCharacterSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCharSelect_HeroSelect_Clean_C::OnCharacterSelected__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Clean.CharSelect_HeroSelect_Clean_C.OnCharacterSelected__DelegateSignature");

	UCharSelect_HeroSelect_Clean_C_OnCharacterSelected__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
