// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_ToolTip_HeadlineAndText_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ToolTip_HeadlineAndText_C::FadeIn(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.FadeIn");

	UBasic_ToolTip_HeadlineAndText_C_FadeIn_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InWidthOverride                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ToolTip_HeadlineAndText_C::SetWidth(float* InWidthOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetWidth");

	UBasic_ToolTip_HeadlineAndText_C_SetWidth_Params params;
	params.InWidthOverride = InWidthOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetMaxWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         MaxWidth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ToolTip_HeadlineAndText_C::SetMaxWidth(float* MaxWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetMaxWidth");

	UBasic_ToolTip_HeadlineAndText_C_SetMaxWidth_Params params;
	params.MaxWidth = MaxWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetMinWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         MinWidth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ToolTip_HeadlineAndText_C::SetMinWidth(float* MinWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetMinWidth");

	UBasic_ToolTip_HeadlineAndText_C_SetMinWidth_Params params;
	params.MinWidth = MinWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetPostionAndAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              InPosition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              InAlignment                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ToolTip_HeadlineAndText_C::SetPostionAndAlignment(struct FVector2D* InPosition, struct FVector2D* InAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetPostionAndAlignment");

	UBasic_ToolTip_HeadlineAndText_C_SetPostionAndAlignment_Params params;
	params.InPosition = InPosition;
	params.InAlignment = InAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Headline                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasic_ToolTip_HeadlineAndText_C::SetText(struct FText* Headline, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetText");

	UBasic_ToolTip_HeadlineAndText_C_SetText_Params params;
	params.Headline = Headline;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Target_Widget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBasic_ToolTip_HeadlineAndText_C::SetTarget(class UWidget** Target_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.SetTarget");

	UBasic_ToolTip_HeadlineAndText_C_SetTarget_Params params;
	params.Target_Widget = Target_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ToolTip_HeadlineAndText_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.PreConstruct");

	UBasic_ToolTip_HeadlineAndText_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.Set Tool Tip Owner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBasic_ToolTip_HeadlineAndText_C::Set_Tool_Tip_Owner(class UWidget** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.Set Tool Tip Owner");

	UBasic_ToolTip_HeadlineAndText_C_Set_Tool_Tip_Owner_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.ExecuteUbergraph_Basic_ToolTip_HeadlineAndText
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ToolTip_HeadlineAndText_C::ExecuteUbergraph_Basic_ToolTip_HeadlineAndText(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ToolTip_HeadlineAndText.Basic_ToolTip_HeadlineAndText_C.ExecuteUbergraph_Basic_ToolTip_HeadlineAndText");

	UBasic_ToolTip_HeadlineAndText_C_ExecuteUbergraph_Basic_ToolTip_HeadlineAndText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
