// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_MissionIconBasic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetTemplate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionTemplate**       Template                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionIconBasic_C::SetTemplate(class UMissionTemplate** Template)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetTemplate");

	UITM_MisSel_MissionIconBasic_C_SetTemplate_Params params;
	params.Template = Template;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionIconBasic_C::SetSelected(bool* InSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetSelected");

	UITM_MisSel_MissionIconBasic_C_SetSelected_Params params;
	params.InSelected = InSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      InMission                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionIconBasic_C::SetMission(class UGeneratedMission** InMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetMission");

	UITM_MisSel_MissionIconBasic_C_SetMission_Params params;
	params.InMission = InMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionIconBasic_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.PreConstruct");

	UITM_MisSel_MissionIconBasic_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FObjectiveMissionIcon*  MissionIcon                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_MisSel_MissionIconBasic_C::SetData(struct FObjectiveMissionIcon* MissionIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.SetData");

	UITM_MisSel_MissionIconBasic_C_SetData_Params params;
	params.MissionIcon = MissionIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.ExecuteUbergraph_ITM_MisSel_MissionIconBasic
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionIconBasic_C::ExecuteUbergraph_ITM_MisSel_MissionIconBasic(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic.ITM_MisSel_MissionIconBasic_C.ExecuteUbergraph_ITM_MisSel_MissionIconBasic");

	UITM_MisSel_MissionIconBasic_C_ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
