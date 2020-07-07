// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ICON_HeroSelect_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ICON_HeroSelect.ICON_HeroSelect_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UICON_HeroSelect_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.IsInteractable");

	UICON_HeroSelect_C_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.GetSelectedClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  DesiredCharacterClass          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UICON_HeroSelect_C::GetSelectedClass(class UClass** DesiredCharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.GetSelectedClass");

	UICON_HeroSelect_C_GetSelectedClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredCharacterClass != nullptr)
		*DesiredCharacterClass = params.DesiredCharacterClass;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UICON_HeroSelect_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseButtonUp");

	UICON_HeroSelect_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_HeroSelect_C::SetScale(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.SetScale");

	UICON_HeroSelect_C_SetScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.UpdateSelected
// (Private, BlueprintCallable, BlueprintEvent)

void UICON_HeroSelect_C::UpdateSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.UpdateSelected");

	UICON_HeroSelect_C_UpdateSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.IsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSelected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UICON_HeroSelect_C::IsSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.IsSelected");

	UICON_HeroSelect_C_IsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.SetCharacterClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_HeroSelect_C::SetCharacterClass(class UClass** Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.SetCharacterClass");

	UICON_HeroSelect_C_SetCharacterClass_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UICON_HeroSelect_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseEnter");

	UICON_HeroSelect_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UICON_HeroSelect_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnMouseLeave");

	UICON_HeroSelect_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.On Click
// (BlueprintCallable, BlueprintEvent)

void UICON_HeroSelect_C::On_Click()
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.On Click");

	UICON_HeroSelect_C_On_Click_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.SelectedCharacterChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 NewCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_HeroSelect_C::SelectedCharacterChanged(class UClass** NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.SelectedCharacterChanged");

	UICON_HeroSelect_C_SelectedCharacterChanged_Params params;
	params.NewCharacter = NewCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterStatsChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_HeroSelect_C::OnCharacterStatsChanged_Event(class AFSDPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterStatsChanged_Event");

	UICON_HeroSelect_C_OnCharacterStatsChanged_Event_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_HeroSelect_C::Init(class UClass** CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.Init");

	UICON_HeroSelect_C_Init_Params params;
	params.CharacterClass = CharacterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_HeroSelect_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.PreConstruct");

	UICON_HeroSelect_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature
// (BlueprintEvent)

void UICON_HeroSelect_C::BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature");

	UICON_HeroSelect_C_BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_25_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature
// (BlueprintEvent)

void UICON_HeroSelect_C::BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature");

	UICON_HeroSelect_C_BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature
// (BlueprintEvent)

void UICON_HeroSelect_C::BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature");

	UICON_HeroSelect_C_BndEvt__BTN_Retire_K2Node_ComponentBoundEvent_63_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.Update Retirement Button
// (BlueprintCallable, BlueprintEvent)

void UICON_HeroSelect_C::Update_Retirement_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.Update Retirement Button");

	UICON_HeroSelect_C_Update_Retirement_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_HeroSelect_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.Tick");

	UICON_HeroSelect_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.ExecuteUbergraph_ICON_HeroSelect
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_HeroSelect_C::ExecuteUbergraph_ICON_HeroSelect(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.ExecuteUbergraph_ICON_HeroSelect");

	UICON_HeroSelect_C_ExecuteUbergraph_ICON_HeroSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetireClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_HeroSelect_C::OnRetireClicked__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetireClicked__DelegateSignature");

	UICON_HeroSelect_C_OnRetireClicked__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_HeroSelect_C::OnRetirementUnhovered__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementUnhovered__DelegateSignature");

	UICON_HeroSelect_C_OnRetirementUnhovered__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_HeroSelect_C::OnRetirementHovered__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnRetirementHovered__DelegateSignature");

	UICON_HeroSelect_C_OnRetirementHovered__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_HeroSelect_C::OnHovered__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnHovered__DelegateSignature");

	UICON_HeroSelect_C_OnHovered__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UICON_HeroSelect_C::OnCharacterSelected__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ICON_HeroSelect.ICON_HeroSelect_C.OnCharacterSelected__DelegateSignature");

	UICON_HeroSelect_C_OnCharacterSelected__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
