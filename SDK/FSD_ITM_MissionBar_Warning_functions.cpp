// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MissionBar_Warning_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.Update
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MissionBar_Warning_C::Update(class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.Update");

	UITM_MissionBar_Warning_C_Update_Params params;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MissionBar_Warning_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.PreConstruct");

	UITM_MissionBar_Warning_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MissionBar_Warning_C::SetData(class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.SetData");

	UITM_MissionBar_Warning_C_SetData_Params params;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_MissionBar_Warning_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.Construct");

	UITM_MissionBar_Warning_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.ExecuteUbergraph_ITM_MissionBar_Warning
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MissionBar_Warning_C::ExecuteUbergraph_ITM_MissionBar_Warning(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionBar_Warning.ITM_MissionBar_Warning_C.ExecuteUbergraph_ITM_MissionBar_Warning");

	UITM_MissionBar_Warning_C_ExecuteUbergraph_ITM_MissionBar_Warning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
