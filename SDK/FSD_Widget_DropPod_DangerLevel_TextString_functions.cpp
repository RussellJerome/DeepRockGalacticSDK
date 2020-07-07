// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Widget_DropPod_DangerLevel_TextString_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_DropPod_DangerLevel_TextString_C::SetColor(struct FSlateColor* InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.SetColor");

	UWidget_DropPod_DangerLevel_TextString_C_SetColor_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_DropPod_DangerLevel_TextString_C::SetText(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.SetText");

	UWidget_DropPod_DangerLevel_TextString_C_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_DangerLevel_TextString_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.Tick");

	UWidget_DropPod_DangerLevel_TextString_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_DangerLevel_TextString_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.PreConstruct");

	UWidget_DropPod_DangerLevel_TextString_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.ExecuteUbergraph_Widget_DropPod_DangerLevel_TextString
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_DangerLevel_TextString_C::ExecuteUbergraph_Widget_DropPod_DangerLevel_TextString(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.ExecuteUbergraph_Widget_DropPod_DangerLevel_TextString");

	UWidget_DropPod_DangerLevel_TextString_C_ExecuteUbergraph_Widget_DropPod_DangerLevel_TextString_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
