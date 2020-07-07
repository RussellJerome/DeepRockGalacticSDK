// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_CharCustomization_IconScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_CharCustomization_IconScreen.ConsoleScreen_CharCustomization_IconScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_CharCustomization_IconScreen_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_CharCustomization_IconScreen.ConsoleScreen_CharCustomization_IconScreen_C.PreConstruct");

	UConsoleScreen_CharCustomization_IconScreen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_CharCustomization_IconScreen.ConsoleScreen_CharCustomization_IconScreen_C.ExecuteUbergraph_ConsoleScreen_CharCustomization_IconScreen
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_CharCustomization_IconScreen_C::ExecuteUbergraph_ConsoleScreen_CharCustomization_IconScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_CharCustomization_IconScreen.ConsoleScreen_CharCustomization_IconScreen_C.ExecuteUbergraph_ConsoleScreen_CharCustomization_IconScreen");

	UConsoleScreen_CharCustomization_IconScreen_C_ExecuteUbergraph_ConsoleScreen_CharCustomization_IconScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
