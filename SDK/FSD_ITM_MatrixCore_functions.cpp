// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MatrixCore_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MatrixCore.ITM_MatrixCore_C.GetMatrixCoreToolTip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_MatrixCore_C::GetMatrixCoreToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MatrixCore.ITM_MatrixCore_C.GetMatrixCoreToolTip");

	UITM_MatrixCore_C_GetMatrixCoreToolTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_MatrixCore.ITM_MatrixCore_C.FromReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             InReward                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESchematicType*                InRewardType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MatrixCore_C::FromReward(class USchematic** InReward, ESchematicType* InRewardType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MatrixCore.ITM_MatrixCore_C.FromReward");

	UITM_MatrixCore_C_FromReward_Params params;
	params.InReward = InReward;
	params.InRewardType = InRewardType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MatrixCore.ITM_MatrixCore_C.FromDeepDiveStage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           StageIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MatrixCore_C::FromDeepDiveStage(int* StageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MatrixCore.ITM_MatrixCore_C.FromDeepDiveStage");

	UITM_MatrixCore_C_FromDeepDiveStage_Params params;
	params.StageIndex = StageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MatrixCore.ITM_MatrixCore_C.SetIconSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         IconSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MatrixCore_C::SetIconSize(float* IconSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MatrixCore.ITM_MatrixCore_C.SetIconSize");

	UITM_MatrixCore_C_SetIconSize_Params params;
	params.IconSize = IconSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MatrixCore.ITM_MatrixCore_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MatrixCore_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MatrixCore.ITM_MatrixCore_C.PreConstruct");

	UITM_MatrixCore_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MatrixCore.ITM_MatrixCore_C.ExecuteUbergraph_ITM_MatrixCore
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MatrixCore_C::ExecuteUbergraph_ITM_MatrixCore(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MatrixCore.ITM_MatrixCore_C.ExecuteUbergraph_ITM_MatrixCore");

	UITM_MatrixCore_C_ExecuteUbergraph_ITM_MatrixCore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
