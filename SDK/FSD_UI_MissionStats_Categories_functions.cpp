// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MissionStats_Categories_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.SelectNext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ForwardDirection               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_Categories_C::SelectNext(bool* ForwardDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.SelectNext");

	UUI_MissionStats_Categories_C_SelectNext_Params params;
	params.ForwardDirection = ForwardDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Vertical Bar
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_MissionStats_Categories_C::Add_Vertical_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Vertical Bar");

	UUI_MissionStats_Categories_C_Add_Vertical_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Category
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             CategoryIcon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsAllCategory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUI_MissionStats_Category_C* CategoryWidget                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_MissionStats_Categories_C::Add_Category(class UTexture2D** CategoryIcon, bool* IsAllCategory, class UUI_MissionStats_Category_C** CategoryWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Category");

	UUI_MissionStats_Categories_C_Add_Category_Params params;
	params.CategoryIcon = CategoryIcon;
	params.IsAllCategory = IsAllCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CategoryWidget != nullptr)
		*CategoryWidget = params.CategoryWidget;
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.GetCategorySelection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UTexture2D*>      Selection                      (Parm, OutParm, ZeroConstructor)

void UUI_MissionStats_Categories_C::GetCategorySelection(TArray<class UTexture2D*>* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.GetCategorySelection");

	UUI_MissionStats_Categories_C_GetCategorySelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selection != nullptr)
		*Selection = params.Selection;
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_Categories_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.PreConstruct");

	UUI_MissionStats_Categories_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Set Categories
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>*     CategoryIcons                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_MissionStats_Categories_C::Set_Categories(TArray<class UTexture2D*>* CategoryIcons)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Set Categories");

	UUI_MissionStats_Categories_C_Set_Categories_Params params;
	params.CategoryIcons = CategoryIcons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Setup Widget Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MissionStats_Category_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_MissionStats_Categories_C::Setup_Widget_Events(class UUI_MissionStats_Category_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Setup Widget Events");

	UUI_MissionStats_Categories_C_Setup_Widget_Events_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.On Category Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MissionStats_Category_C** CategoryWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Is_Selected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_Categories_C::On_Category_Clicked(class UUI_MissionStats_Category_C** CategoryWidget, bool* Is_Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.On Category Clicked");

	UUI_MissionStats_Categories_C_On_Category_Clicked_Params params;
	params.CategoryWidget = CategoryWidget;
	params.Is_Selected = Is_Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_MissionStats_Categories_C::BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UUI_MissionStats_Categories_C_BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_MissionStats_Categories_C::BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UUI_MissionStats_Categories_C_BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.ExecuteUbergraph_UI_MissionStats_Categories
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionStats_Categories_C::ExecuteUbergraph_UI_MissionStats_Categories(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.ExecuteUbergraph_UI_MissionStats_Categories");

	UUI_MissionStats_Categories_C_ExecuteUbergraph_UI_MissionStats_Categories_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.OnSelectedChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MissionStats_Categories_C::OnSelectedChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.OnSelectedChanged__DelegateSignature");

	UUI_MissionStats_Categories_C_OnSelectedChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
