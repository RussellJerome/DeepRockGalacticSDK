// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_EscMenu_BriefingV2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateFromAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_EscMenu_BriefingV2_C::UpdateFromAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateFromAnimation");

	UITM_EscMenu_BriefingV2_C_UpdateFromAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateBiomeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBiome**                 Biome                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_EscMenu_BriefingV2_C::UpdateBiomeInfo(class UBiome** Biome)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateBiomeInfo");

	UITM_EscMenu_BriefingV2_C_UpdateBiomeInfo_Params params;
	params.Biome = Biome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Get_Button_Mutator_ToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_EscMenu_BriefingV2_C::Get_Button_Mutator_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Get_Button_Mutator_ToolTipWidget_1");

	UITM_EscMenu_BriefingV2_C_Get_Button_Mutator_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Get_Button_Warning_ToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_EscMenu_BriefingV2_C::Get_Button_Warning_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Get_Button_Warning_ToolTipWidget_1");

	UITM_EscMenu_BriefingV2_C_Get_Button_Warning_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Get_Button_MissionType_ToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_EscMenu_BriefingV2_C::Get_Button_MissionType_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Get_Button_MissionType_ToolTipWidget_1");

	UITM_EscMenu_BriefingV2_C_Get_Button_MissionType_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionStructure
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDeepDive                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_EscMenu_BriefingV2_C::UpdateMissionStructure(bool* IsDeepDive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionStructure");

	UITM_EscMenu_BriefingV2_C_UpdateMissionStructure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDeepDive != nullptr)
		*IsDeepDive = params.IsDeepDive;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_EscMenu_BriefingV2_C::UpdateMissionInfo(class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionInfo");

	UITM_EscMenu_BriefingV2_C_UpdateMissionInfo_Params params;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_EscMenu_BriefingV2_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.PreConstruct");

	UITM_EscMenu_BriefingV2_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Update
// (BlueprintCallable, BlueprintEvent)

void UITM_EscMenu_BriefingV2_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Update");

	UITM_EscMenu_BriefingV2_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionTime
// (BlueprintCallable, BlueprintEvent)

void UITM_EscMenu_BriefingV2_C::UpdateMissionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.UpdateMissionTime");

	UITM_EscMenu_BriefingV2_C_UpdateMissionTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Close
// (BlueprintCallable, BlueprintEvent)

void UITM_EscMenu_BriefingV2_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Close");

	UITM_EscMenu_BriefingV2_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_EscMenu_BriefingV2_C::BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UITM_EscMenu_BriefingV2_C_BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_Biome_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_EscMenu_BriefingV2_C::BndEvt__Button_Biome_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_Biome_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UITM_EscMenu_BriefingV2_C_BndEvt__Button_Biome_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_EscMenu_BriefingV2_C::BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UITM_EscMenu_BriefingV2_C_BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_EscMenu_BriefingV2_C::BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UITM_EscMenu_BriefingV2_C_BndEvt__Button_MissionType_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_Spacerig_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_EscMenu_BriefingV2_C::BndEvt__Button_Spacerig_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BndEvt__Button_Spacerig_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UITM_EscMenu_BriefingV2_C_BndEvt__Button_Spacerig_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_EscMenu_BriefingV2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.Construct");

	UITM_EscMenu_BriefingV2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_EscMenu_BriefingV2_C::OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.OnGeneratedMissionChanged");

	UITM_EscMenu_BriefingV2_C_OnGeneratedMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MutatorClicked_Event
// (BlueprintCallable, BlueprintEvent)

void UITM_EscMenu_BriefingV2_C::MutatorClicked_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MutatorClicked_Event");

	UITM_EscMenu_BriefingV2_C_MutatorClicked_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.WarningClicked_Event
// (BlueprintCallable, BlueprintEvent)

void UITM_EscMenu_BriefingV2_C::WarningClicked_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.WarningClicked_Event");

	UITM_EscMenu_BriefingV2_C_WarningClicked_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.ExecuteUbergraph_ITM_EscMenu_BriefingV2
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_EscMenu_BriefingV2_C::ExecuteUbergraph_ITM_EscMenu_BriefingV2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.ExecuteUbergraph_ITM_EscMenu_BriefingV2");

	UITM_EscMenu_BriefingV2_C_ExecuteUbergraph_ITM_EscMenu_BriefingV2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BiomeClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_EscMenu_BriefingV2_C::BiomeClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.BiomeClicked__DelegateSignature");

	UITM_EscMenu_BriefingV2_C_BiomeClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.WarningClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_EscMenu_BriefingV2_C::WarningClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.WarningClicked__DelegateSignature");

	UITM_EscMenu_BriefingV2_C_WarningClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MutatorClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_EscMenu_BriefingV2_C::MutatorClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MutatorClicked__DelegateSignature");

	UITM_EscMenu_BriefingV2_C_MutatorClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MissionTypeClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_EscMenu_BriefingV2_C::MissionTypeClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_EscMenu_BriefingV2.ITM_EscMenu_BriefingV2_C.MissionTypeClicked__DelegateSignature");

	UITM_EscMenu_BriefingV2_C_MissionTypeClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
