// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_MotivationalQuote_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_MotivationalQuote_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.Construct");

	UConsoleScreen_MotivationalQuote_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_MotivationalQuote_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.Tick");

	UConsoleScreen_MotivationalQuote_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.ExecuteUbergraph_ConsoleScreen_MotivationalQuote
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_MotivationalQuote_C::ExecuteUbergraph_ConsoleScreen_MotivationalQuote(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_MotivationalQuote.ConsoleScreen_MotivationalQuote_C.ExecuteUbergraph_ConsoleScreen_MotivationalQuote");

	UConsoleScreen_MotivationalQuote_C_ExecuteUbergraph_ConsoleScreen_MotivationalQuote_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
