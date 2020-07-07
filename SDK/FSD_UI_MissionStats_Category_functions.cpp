// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MissionStats_Category_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MissionStats_Category.UI_MissionStats_Category_C.Click
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MissionStats_Category_C::Click()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.Click");

	UUI_MissionStats_Category_C_Click_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_MissionStats_Category_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.IsInteractable");

	UUI_MissionStats_Category_C_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.GetCategoryIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*              CategoryIcon                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_Category_C::GetCategoryIcon(class UTexture2D** CategoryIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.GetCategoryIcon");

	UUI_MissionStats_Category_C_GetCategoryIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CategoryIcon != nullptr)
		*CategoryIcon = params.CategoryIcon;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_MissionStats_Category_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseButtonUp");

	UUI_MissionStats_Category_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.IsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CategorySelected               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_Category_C::IsSelected(bool* CategorySelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.IsSelected");

	UUI_MissionStats_Category_C_IsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CategorySelected != nullptr)
		*CategorySelected = params.CategorySelected;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_Category_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.PreConstruct");

	UUI_MissionStats_Category_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.Set Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          CategorySelected               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_Category_C::Set_Selected(bool* CategorySelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.Set Selected");

	UUI_MissionStats_Category_C_Set_Selected_Params params;
	params.CategorySelected = CategorySelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MissionStats_Category_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.Construct");

	UUI_MissionStats_Category_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_MissionStats_Category_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseEnter");

	UUI_MissionStats_Category_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_MissionStats_Category_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseLeave");

	UUI_MissionStats_Category_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.Set Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_Category_C::Set_Hovered(bool* IsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.Set Hovered");

	UUI_MissionStats_Category_C_Set_Hovered_Params params;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.ExecuteUbergraph_UI_MissionStats_Category
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_Category_C::ExecuteUbergraph_UI_MissionStats_Category(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.ExecuteUbergraph_UI_MissionStats_Category");

	UUI_MissionStats_Category_C_ExecuteUbergraph_UI_MissionStats_Category_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.On Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MissionStats_Category_C** CategoryWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Is_Selected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_Category_C::On_Clicked__DelegateSignature(class UUI_MissionStats_Category_C** CategoryWidget, bool* Is_Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.On Clicked__DelegateSignature");

	UUI_MissionStats_Category_C_On_Clicked__DelegateSignature_Params params;
	params.CategoryWidget = CategoryWidget;
	params.Is_Selected = Is_Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
