// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDive_ObjectiveIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetTemplateIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_MisSel_MissionIcon_C** Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMissionTemplate**       InMissionTemplate              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDive_ObjectiveIcon_C::SetTemplateIcon(class UITM_MisSel_MissionIcon_C** Icon, class UMissionTemplate** InMissionTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetTemplateIcon");

	UITM_DeepDive_ObjectiveIcon_C_SetTemplateIcon_Params params;
	params.Icon = Icon;
	params.InMissionTemplate = InMissionTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetObjectiveIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MaskedImage_C**      Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass**                 Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDive_ObjectiveIcon_C::SetObjectiveIcon(class UUI_MaskedImage_C** Icon, class UClass** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetObjectiveIcon");

	UITM_DeepDive_ObjectiveIcon_C_SetObjectiveIcon_Params params;
	params.Icon = Icon;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      InMission                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDive_ObjectiveIcon_C::SetData(class UGeneratedMission** InMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.SetData");

	UITM_DeepDive_ObjectiveIcon_C_SetData_Params params;
	params.InMission = InMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDive_ObjectiveIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.PreConstruct");

	UITM_DeepDive_ObjectiveIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDive_ObjectiveIcon_C::ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_ObjectiveIcon.ITM_DeepDive_ObjectiveIcon_C.ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon");

	UITM_DeepDive_ObjectiveIcon_C_ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
