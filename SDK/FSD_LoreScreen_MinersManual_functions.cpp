// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LoreScreen_MinersManual_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LoreScreen_MinersManual.LoreScreen_MinersManual_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_MinersManual_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_MinersManual.LoreScreen_MinersManual_C.PreConstruct");

	ULoreScreen_MinersManual_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_MinersManual.LoreScreen_MinersManual_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoreScreen_MinersManual_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_MinersManual.LoreScreen_MinersManual_C.Construct");

	ULoreScreen_MinersManual_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoreScreen_MinersManual.LoreScreen_MinersManual_C.ExecuteUbergraph_LoreScreen_MinersManual
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoreScreen_MinersManual_C::ExecuteUbergraph_LoreScreen_MinersManual(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoreScreen_MinersManual.LoreScreen_MinersManual_C.ExecuteUbergraph_LoreScreen_MinersManual");

	ULoreScreen_MinersManual_C_ExecuteUbergraph_LoreScreen_MinersManual_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
