// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MutatorsAndWarnings_Entry1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MutatorsAndWarnings_Entry1_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.PreConstruct");

	UITM_MutatorsAndWarnings_Entry1_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_MutatorsAndWarnings_Entry1_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.Construct");

	UITM_MutatorsAndWarnings_Entry1_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MutatorsAndWarnings_Entry1_C::ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1");

	UITM_MutatorsAndWarnings_Entry1_C_ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
