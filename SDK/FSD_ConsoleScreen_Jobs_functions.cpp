// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_Jobs_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_Jobs.ConsoleScreen_Jobs_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_Jobs_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Jobs.ConsoleScreen_Jobs_C.Construct");

	UConsoleScreen_Jobs_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Jobs.ConsoleScreen_Jobs_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Jobs_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Jobs.ConsoleScreen_Jobs_C.PreConstruct");

	UConsoleScreen_Jobs_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_Jobs.ConsoleScreen_Jobs_C.ExecuteUbergraph_ConsoleScreen_Jobs
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_Jobs_C::ExecuteUbergraph_ConsoleScreen_Jobs(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Jobs.ConsoleScreen_Jobs_C.ExecuteUbergraph_ConsoleScreen_Jobs");

	UConsoleScreen_Jobs_C_ExecuteUbergraph_ConsoleScreen_Jobs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
