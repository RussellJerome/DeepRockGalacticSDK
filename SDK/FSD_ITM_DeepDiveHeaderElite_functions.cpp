// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDiveHeaderElite_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.SetEliteContents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  EliteContents                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_DeepDiveHeaderElite_C::SetEliteContents(struct FText* EliteContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.SetEliteContents");

	UITM_DeepDiveHeaderElite_C_SetEliteContents_Params params;
	params.EliteContents = EliteContents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDiveHeaderElite_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.PreConstruct");

	UITM_DeepDiveHeaderElite_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.ExecuteUbergraph_ITM_DeepDiveHeaderElite
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDiveHeaderElite_C::ExecuteUbergraph_ITM_DeepDiveHeaderElite(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeaderElite.ITM_DeepDiveHeaderElite_C.ExecuteUbergraph_ITM_DeepDiveHeaderElite");

	UITM_DeepDiveHeaderElite_C_ExecuteUbergraph_ITM_DeepDiveHeaderElite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
