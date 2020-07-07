// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_MisSel_MissionDescription_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.HandleAssignments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDifficultySetting**     optionalDifficulty             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MisSel_MissionDescription_C::HandleAssignments(class UGeneratedMission** mission, class UDifficultySetting** optionalDifficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.HandleAssignments");

	UWND_MisSel_MissionDescription_C_HandleAssignments_Params params;
	params.mission = mission;
	params.optionalDifficulty = optionalDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDifficultySetting**     Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MisSel_MissionDescription_C::SetData(class UGeneratedMission** mission, class UDifficultySetting** Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.SetData");

	UWND_MisSel_MissionDescription_C_SetData_Params params;
	params.mission = mission;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MisSel_MissionDescription_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.PreConstruct");

	UWND_MisSel_MissionDescription_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.BndEvt__Button_MissionInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWND_MisSel_MissionDescription_C::BndEvt__Button_MissionInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.BndEvt__Button_MissionInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWND_MisSel_MissionDescription_C_BndEvt__Button_MissionInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.ExecuteUbergraph_WND_MisSel_MissionDescription
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MisSel_MissionDescription_C::ExecuteUbergraph_WND_MisSel_MissionDescription(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.ExecuteUbergraph_WND_MisSel_MissionDescription");

	UWND_MisSel_MissionDescription_C_ExecuteUbergraph_WND_MisSel_MissionDescription_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
