// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CreditsEntry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CreditsEntry.ITM_CreditsEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CreditsEntry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CreditsEntry.ITM_CreditsEntry_C.PreConstruct");

	UITM_CreditsEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CreditsEntry.ITM_CreditsEntry_C.ExecuteUbergraph_ITM_CreditsEntry
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CreditsEntry_C::ExecuteUbergraph_ITM_CreditsEntry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CreditsEntry.ITM_CreditsEntry_C.ExecuteUbergraph_ITM_CreditsEntry");

	UITM_CreditsEntry_C_ExecuteUbergraph_ITM_CreditsEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
