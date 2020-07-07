// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_Trading_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_Trading.ConsoleScreen_Trading_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_Trading_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Trading.ConsoleScreen_Trading_C.Construct");

	UConsoleScreen_Trading_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Trading.ConsoleScreen_Trading_C.ExecuteUbergraph_ConsoleScreen_Trading
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Trading_C::ExecuteUbergraph_ConsoleScreen_Trading(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Trading.ConsoleScreen_Trading_C.ExecuteUbergraph_ConsoleScreen_Trading");

	UConsoleScreen_Trading_C_ExecuteUbergraph_ConsoleScreen_Trading_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
