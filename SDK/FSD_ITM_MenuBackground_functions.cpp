// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MenuBackground_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MenuBackground.ITM_MenuBackground_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MenuBackground_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MenuBackground.ITM_MenuBackground_C.PreConstruct");

	UITM_MenuBackground_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MenuBackground.ITM_MenuBackground_C.ExecuteUbergraph_ITM_MenuBackground
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MenuBackground_C::ExecuteUbergraph_ITM_MenuBackground(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MenuBackground.ITM_MenuBackground_C.ExecuteUbergraph_ITM_MenuBackground");

	UITM_MenuBackground_C_ExecuteUbergraph_ITM_MenuBackground_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
