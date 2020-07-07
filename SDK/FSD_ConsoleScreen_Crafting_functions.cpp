// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_Crafting_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.SetShowShopSign
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show_Shop_Sign                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Crafting_C::SetShowShopSign(bool* Show_Shop_Sign)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.SetShowShopSign");

	UConsoleScreen_Crafting_C_SetShowShopSign_Params params;
	params.Show_Shop_Sign = Show_Shop_Sign;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_Crafting_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.Construct");

	UConsoleScreen_Crafting_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.Notification Change
// (BlueprintCallable, BlueprintEvent)

void UConsoleScreen_Crafting_C::Notification_Change()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.Notification Change");

	UConsoleScreen_Crafting_C_Notification_Change_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Crafting_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.PreConstruct");

	UConsoleScreen_Crafting_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.ExecuteUbergraph_ConsoleScreen_Crafting
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Crafting_C::ExecuteUbergraph_ConsoleScreen_Crafting(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Crafting.ConsoleScreen_Crafting_C.ExecuteUbergraph_ConsoleScreen_Crafting");

	UConsoleScreen_Crafting_C_ExecuteUbergraph_ConsoleScreen_Crafting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
