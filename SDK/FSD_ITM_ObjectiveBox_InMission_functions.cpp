// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ObjectiveBox_InMission_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.UpdateText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  InCounterText                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D**             InCounterIcon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Completed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ObjectiveBox_InMission_C::UpdateText(struct FText* InText, struct FText* InCounterText, class UTexture2D** InCounterIcon, bool* Completed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.UpdateText");

	UITM_ObjectiveBox_InMission_C_UpdateText_Params params;
	params.InText = InText;
	params.InCounterText = InCounterText;
	params.InCounterIcon = InCounterIcon;
	params.Completed = Completed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.Set Objective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjective**             Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsPrimary                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ObjectiveBox_InMission_C::Set_Objective(class UObjective** Objective, bool* IsPrimary)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.Set Objective");

	UITM_ObjectiveBox_InMission_C_Set_Objective_Params params;
	params.Objective = Objective;
	params.IsPrimary = IsPrimary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.OnObjectiveUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjective**             Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ObjectiveBox_InMission_C::OnObjectiveUpdated(class UObjective** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.OnObjectiveUpdated");

	UITM_ObjectiveBox_InMission_C_OnObjectiveUpdated_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.SetCustom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Completed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ObjectiveBox_InMission_C::SetCustom(struct FText* Text, bool* Completed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.SetCustom");

	UITM_ObjectiveBox_InMission_C_SetCustom_Params params;
	params.Text = Text;
	params.Completed = Completed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.ExecuteUbergraph_ITM_ObjectiveBox_InMission
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ObjectiveBox_InMission_C::ExecuteUbergraph_ITM_ObjectiveBox_InMission(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ObjectiveBox_InMission.ITM_ObjectiveBox_InMission_C.ExecuteUbergraph_ITM_ObjectiveBox_InMission");

	UITM_ObjectiveBox_InMission_C_ExecuteUbergraph_ITM_ObjectiveBox_InMission_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
