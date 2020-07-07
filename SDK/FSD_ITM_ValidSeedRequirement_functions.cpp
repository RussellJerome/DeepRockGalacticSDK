// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ValidSeedRequirement_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ValidSeedRequirement.ITM_ValidSeedRequirement_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ValidSeedRequirement_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ValidSeedRequirement.ITM_ValidSeedRequirement_C.PreConstruct");

	UITM_ValidSeedRequirement_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ValidSeedRequirement.ITM_ValidSeedRequirement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_ValidSeedRequirement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ValidSeedRequirement.ITM_ValidSeedRequirement_C.Construct");

	UITM_ValidSeedRequirement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ValidSeedRequirement.ITM_ValidSeedRequirement_C.ExecuteUbergraph_ITM_ValidSeedRequirement
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ValidSeedRequirement_C::ExecuteUbergraph_ITM_ValidSeedRequirement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ValidSeedRequirement.ITM_ValidSeedRequirement_C.ExecuteUbergraph_ITM_ValidSeedRequirement");

	UITM_ValidSeedRequirement_C_ExecuteUbergraph_ITM_ValidSeedRequirement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
