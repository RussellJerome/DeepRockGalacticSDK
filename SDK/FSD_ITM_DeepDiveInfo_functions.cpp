// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDiveInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_DeepDiveInfo.ITM_DeepDiveInfo_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDiveInfo_C::Update(class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveInfo.ITM_DeepDiveInfo_C.Update");

	UITM_DeepDiveInfo_C_Update_Params params;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDiveInfo.ITM_DeepDiveInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDiveInfo_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveInfo.ITM_DeepDiveInfo_C.PreConstruct");

	UITM_DeepDiveInfo_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDiveInfo.ITM_DeepDiveInfo_C.ExecuteUbergraph_ITM_DeepDiveInfo
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDiveInfo_C::ExecuteUbergraph_ITM_DeepDiveInfo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDiveInfo.ITM_DeepDiveInfo_C.ExecuteUbergraph_ITM_DeepDiveInfo");

	UITM_DeepDiveInfo_C_ExecuteUbergraph_ITM_DeepDiveInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
