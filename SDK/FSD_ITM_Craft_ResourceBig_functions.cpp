// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Craft_ResourceBig_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Craft_ResourceBig.ITM_Craft_ResourceBig_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_Craft_ResourceBig_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ResourceBig.ITM_Craft_ResourceBig_C.Construct");

	UITM_Craft_ResourceBig_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ResourceBig.ITM_Craft_ResourceBig_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_ResourceBig_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ResourceBig.ITM_Craft_ResourceBig_C.PreConstruct");

	UITM_Craft_ResourceBig_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ResourceBig.ITM_Craft_ResourceBig_C.ExecuteUbergraph_ITM_Craft_ResourceBig
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_ResourceBig_C::ExecuteUbergraph_ITM_Craft_ResourceBig(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ResourceBig.ITM_Craft_ResourceBig_C.ExecuteUbergraph_ITM_Craft_ResourceBig");

	UITM_Craft_ResourceBig_C_ExecuteUbergraph_ITM_Craft_ResourceBig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
