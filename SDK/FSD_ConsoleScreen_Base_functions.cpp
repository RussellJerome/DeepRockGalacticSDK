// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_Base.ConsoleScreen_Base_C.SetNotificationVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Base_C::SetNotificationVisible(bool* NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Base.ConsoleScreen_Base_C.SetNotificationVisible");

	UConsoleScreen_Base_C_SetNotificationVisible_Params params;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Base.ConsoleScreen_Base_C.SetNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D**             IconTexture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Base_C::SetNotification(struct FText* Text, class UTexture2D** IconTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Base.ConsoleScreen_Base_C.SetNotification");

	UConsoleScreen_Base_C_SetNotification_Params params;
	params.Text = Text;
	params.IconTexture = IconTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Base.ConsoleScreen_Base_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UConsoleScreen_Base_C::SetText(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Base.ConsoleScreen_Base_C.SetText");

	UConsoleScreen_Base_C_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Base.ConsoleScreen_Base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Base_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Base.ConsoleScreen_Base_C.PreConstruct");

	UConsoleScreen_Base_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Base.ConsoleScreen_Base_C.ExecuteUbergraph_ConsoleScreen_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Base_C::ExecuteUbergraph_ConsoleScreen_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Base.ConsoleScreen_Base_C.ExecuteUbergraph_ConsoleScreen_Base");

	UConsoleScreen_Base_C_ExecuteUbergraph_ConsoleScreen_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
