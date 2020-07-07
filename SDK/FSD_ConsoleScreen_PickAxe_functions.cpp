// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_PickAxe_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_PickAxe.ConsoleScreen_PickAxe_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_PickAxe_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_PickAxe.ConsoleScreen_PickAxe_C.Construct");

	UConsoleScreen_PickAxe_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_PickAxe.ConsoleScreen_PickAxe_C.OnItemUINotificationChange
// (BlueprintCallable, BlueprintEvent)

void UConsoleScreen_PickAxe_C::OnItemUINotificationChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_PickAxe.ConsoleScreen_PickAxe_C.OnItemUINotificationChange");

	UConsoleScreen_PickAxe_C_OnItemUINotificationChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_PickAxe.ConsoleScreen_PickAxe_C.ExecuteUbergraph_ConsoleScreen_PickAxe
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_PickAxe_C::ExecuteUbergraph_ConsoleScreen_PickAxe(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_PickAxe.ConsoleScreen_PickAxe_C.ExecuteUbergraph_ConsoleScreen_PickAxe");

	UConsoleScreen_PickAxe_C_ExecuteUbergraph_ConsoleScreen_PickAxe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
