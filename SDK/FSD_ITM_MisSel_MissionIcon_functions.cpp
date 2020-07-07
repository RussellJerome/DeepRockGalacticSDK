// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_MissionIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FObjectiveMissionIcon*  MissionIcon                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_MisSel_MissionIcon_C::SetIcon(struct FObjectiveMissionIcon* MissionIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.SetIcon");

	UITM_MisSel_MissionIcon_C_SetIcon_Params params;
	params.MissionIcon = MissionIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionTemplate**       InMissionTemplate              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionIcon_C::SetData(class UMissionTemplate** InMissionTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.SetData");

	UITM_MisSel_MissionIcon_C_SetData_Params params;
	params.InMissionTemplate = InMissionTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.PreConstruct");

	UITM_MisSel_MissionIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.ExecuteUbergraph_ITM_MisSel_MissionIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionIcon_C::ExecuteUbergraph_ITM_MisSel_MissionIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIcon.ITM_MisSel_MissionIcon_C.ExecuteUbergraph_ITM_MisSel_MissionIcon");

	UITM_MisSel_MissionIcon_C_ExecuteUbergraph_ITM_MisSel_MissionIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
