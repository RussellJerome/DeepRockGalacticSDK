// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_BGtemplate_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetTextSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TextSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_BGtemplate_C::SetTextSize(int* TextSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetTextSize");

	UConsoleScreen_BGtemplate_C_SetTextSize_Params params;
	params.TextSize = TextSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetHeaderBars
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Toggle_Header_Bars             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_BGtemplate_C::SetHeaderBars(bool* Toggle_Header_Bars)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetHeaderBars");

	UConsoleScreen_BGtemplate_C_SetHeaderBars_Params params;
	params.Toggle_Header_Bars = Toggle_Header_Bars;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetNotificationVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_BGtemplate_C::SetNotificationVisible(bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetNotificationVisible");

	UConsoleScreen_BGtemplate_C_SetNotificationVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D**             InIcon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_BGtemplate_C::SetNotification(struct FText* Text, class UTexture2D** InIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetNotification");

	UConsoleScreen_BGtemplate_C_SetNotification_Params params;
	params.Text = Text;
	params.InIcon = InIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UConsoleScreen_BGtemplate_C::SetText(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.SetText");

	UConsoleScreen_BGtemplate_C_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_BGtemplate_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.PreConstruct");

	UConsoleScreen_BGtemplate_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_BGtemplate_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.Construct");

	UConsoleScreen_BGtemplate_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.ExecuteUbergraph_ConsoleScreen_BGtemplate
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_BGtemplate_C::ExecuteUbergraph_ConsoleScreen_BGtemplate(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_BGtemplate.ConsoleScreen_BGtemplate_C.ExecuteUbergraph_ConsoleScreen_BGtemplate");

	UConsoleScreen_BGtemplate_C_ExecuteUbergraph_ConsoleScreen_BGtemplate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
