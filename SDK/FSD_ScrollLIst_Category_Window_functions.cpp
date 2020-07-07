// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScrollLIst_Category_Window_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SelectNext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollLIst_Category_Window_C::SelectNext(int* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SelectNext");

	UScrollLIst_Category_Window_C_SelectNext_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CreateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMM_ButtonInfo*         Button                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  HeaderText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          ShouldClick                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowArrow                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollLIst_Category_Window_C::CreateButton(struct FMM_ButtonInfo* Button, struct FText* HeaderText, bool* ShouldClick, bool* ShowArrow, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CreateButton");

	UScrollLIst_Category_Window_C_CreateButton_Params params;
	params.Button = Button;
	params.HeaderText = HeaderText;
	params.ShouldClick = ShouldClick;
	params.ShowArrow = ShowArrow;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.OnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollLIst_Category_Window_C::OnClicked(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.OnClicked");

	UScrollLIst_Category_Window_C_OnClicked_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class U_MENU_MinersManual_C**  _MENU_MinersManual             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScrollLIst_Category_Window_C::SetData(class U_MENU_MinersManual_C** _MENU_MinersManual)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SetData");

	UScrollLIst_Category_Window_C_SetData_Params params;
	params._MENU_MinersManual = _MENU_MinersManual;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PlayButtonIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULore_List_Element_C**   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScrollLIst_Category_Window_C::PlayButtonIntro(class ULore_List_Element_C** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PlayButtonIntro");

	UScrollLIst_Category_Window_C_PlayButtonIntro_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Clear
// (BlueprintCallable, BlueprintEvent)

void UScrollLIst_Category_Window_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Clear");

	UScrollLIst_Category_Window_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollLIst_Category_Window_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Tick");

	UScrollLIst_Category_Window_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PlayAnimInternal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULore_List_Element_C**   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScrollLIst_Category_Window_C::PlayAnimInternal(class ULore_List_Element_C** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PlayAnimInternal");

	UScrollLIst_Category_Window_C_PlayAnimInternal_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CheckForHeader
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULore_List_Element_C**   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScrollLIst_Category_Window_C::CheckForHeader(class ULore_List_Element_C** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CheckForHeader");

	UScrollLIst_Category_Window_C_CheckForHeader_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScrollLIst_Category_Window_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Construct");

	UScrollLIst_Category_Window_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CurrentOffset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollLIst_Category_Window_C::CustomEvent(float* CurrentOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CustomEvent");

	UScrollLIst_Category_Window_C_CustomEvent_Params params;
	params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.ScrollIntoViewDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                WidgetToFind                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScrollLIst_Category_Window_C::ScrollIntoViewDelay(class UWidget** WidgetToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.ScrollIntoViewDelay");

	UScrollLIst_Category_Window_C_ScrollIntoViewDelay_Params params;
	params.WidgetToFind = WidgetToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PrepareNewSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumberOfButtons                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollLIst_Category_Window_C::PrepareNewSection(int* NumberOfButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PrepareNewSection");

	UScrollLIst_Category_Window_C_PrepareNewSection_Params params;
	params.NumberOfButtons = NumberOfButtons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScrollLIst_Category_Window_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.OnInitialized");

	UScrollLIst_Category_Window_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.DecreseFillSpace
// (BlueprintCallable, BlueprintEvent)

void UScrollLIst_Category_Window_C::DecreseFillSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.DecreseFillSpace");

	UScrollLIst_Category_Window_C_DecreseFillSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SetSelectedButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollLIst_Category_Window_C::SetSelectedButton(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SetSelectedButton");

	UScrollLIst_Category_Window_C_SetSelectedButton_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.ExecuteUbergraph_ScrollLIst_Category_Window
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollLIst_Category_Window_C::ExecuteUbergraph_ScrollLIst_Category_Window(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.ExecuteUbergraph_ScrollLIst_Category_Window");

	UScrollLIst_Category_Window_C_ExecuteUbergraph_ScrollLIst_Category_Window_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
