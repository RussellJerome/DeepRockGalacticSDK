// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDiveHeader_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromActiveDeepDive
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_DeepDiveHeader_C::FromActiveDeepDive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromActiveDeepDive");

	UITM_DeepDiveHeader_C_FromActiveDeepDive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromDeepDive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDeepDive**              InDeepDive                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDiveHeader_C::FromDeepDive(class UDeepDive** InDeepDive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.FromDeepDive");

	UITM_DeepDiveHeader_C_FromDeepDive_Params params;
	params.InDeepDive = InDeepDive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetEliteActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          EliteActive                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDiveHeader_C::SetEliteActive(bool* EliteActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetEliteActive");

	UITM_DeepDiveHeader_C_SetEliteActive_Params params;
	params.EliteActive = EliteActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetHeaderContents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Header_Contents                (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_DeepDiveHeader_C::SetHeaderContents(struct FText* Header_Contents)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.SetHeaderContents");

	UITM_DeepDiveHeader_C_SetHeaderContents_Params params;
	params.Header_Contents = Header_Contents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDiveHeader_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.PreConstruct");

	UITM_DeepDiveHeader_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.ExecuteUbergraph_ITM_DeepDiveHeader
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDiveHeader_C::ExecuteUbergraph_ITM_DeepDiveHeader(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveHeader.ITM_DeepDiveHeader_C.ExecuteUbergraph_ITM_DeepDiveHeader");

	UITM_DeepDiveHeader_C_ExecuteUbergraph_ITM_DeepDiveHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
