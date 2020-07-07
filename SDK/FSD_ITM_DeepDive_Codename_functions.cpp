// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDive_Codename_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_DeepDive_Codename.ITM_DeepDive_Codename_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDeepDive**              DeepDive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDive_Codename_C::SetData(class UDeepDive** DeepDive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_Codename.ITM_DeepDive_Codename_C.SetData");

	UITM_DeepDive_Codename_C_SetData_Params params;
	params.DeepDive = DeepDive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDive_Codename.ITM_DeepDive_Codename_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDive_Codename_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_Codename.ITM_DeepDive_Codename_C.PreConstruct");

	UITM_DeepDive_Codename_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDive_Codename.ITM_DeepDive_Codename_C.ExecuteUbergraph_ITM_DeepDive_Codename
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDive_Codename_C::ExecuteUbergraph_ITM_DeepDive_Codename(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_Codename.ITM_DeepDive_Codename_C.ExecuteUbergraph_ITM_DeepDive_Codename");

	UITM_DeepDive_Codename_C_ExecuteUbergraph_ITM_DeepDive_Codename_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
