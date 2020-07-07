// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_CharCustomization_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_CharCustomization.ConsoleScreen_CharCustomization_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_CharCustomization_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_CharCustomization.ConsoleScreen_CharCustomization_C.Construct");

	UConsoleScreen_CharCustomization_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_CharCustomization.ConsoleScreen_CharCustomization_C.OnItemUINotificationChange
// (BlueprintCallable, BlueprintEvent)

void UConsoleScreen_CharCustomization_C::OnItemUINotificationChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_CharCustomization.ConsoleScreen_CharCustomization_C.OnItemUINotificationChange");

	UConsoleScreen_CharCustomization_C_OnItemUINotificationChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_CharCustomization.ConsoleScreen_CharCustomization_C.ExecuteUbergraph_ConsoleScreen_CharCustomization
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_CharCustomization_C::ExecuteUbergraph_ConsoleScreen_CharCustomization(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_CharCustomization.ConsoleScreen_CharCustomization_C.ExecuteUbergraph_ConsoleScreen_CharCustomization");

	UConsoleScreen_CharCustomization_C_ExecuteUbergraph_ConsoleScreen_CharCustomization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
