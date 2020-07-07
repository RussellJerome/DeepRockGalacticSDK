// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Craft_ResourceSmall_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_ResourceSmall_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.PreConstruct");

	UITM_Craft_ResourceSmall_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_Craft_ResourceSmall_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.Construct");

	UITM_Craft_ResourceSmall_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.ExecuteUbergraph_ITM_Craft_ResourceSmall
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Craft_ResourceSmall_C::ExecuteUbergraph_ITM_Craft_ResourceSmall(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ResourceSmall.ITM_Craft_ResourceSmall_C.ExecuteUbergraph_ITM_Craft_ResourceSmall");

	UITM_Craft_ResourceSmall_C_ExecuteUbergraph_ITM_Craft_ResourceSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
