// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_2nd_KillFleas_6_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetInMissionCounterIcon
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOBJ_2nd_KillFleas_5_C::GetInMissionCounterIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetInMissionCounterIcon");

	UOBJ_2nd_KillFleas_5_C_GetInMissionCounterIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetInMissionCounterText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOBJ_2nd_KillFleas_5_C::GetInMissionCounterText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetInMissionCounterText");

	UOBJ_2nd_KillFleas_5_C_GetInMissionCounterText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetMissionIcon
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FObjectiveMissionIcon   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FObjectiveMissionIcon UOBJ_2nd_KillFleas_5_C::GetMissionIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetMissionIcon");

	UOBJ_2nd_KillFleas_5_C_GetMissionIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetObjectiveIcon
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOBJ_2nd_KillFleas_5_C::GetObjectiveIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetObjectiveIcon");

	UOBJ_2nd_KillFleas_5_C_GetObjectiveIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetObjectiveAmount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         missionLength                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UOBJ_2nd_KillFleas_5_C::GetObjectiveAmount(float* missionLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetObjectiveAmount");

	UOBJ_2nd_KillFleas_5_C_GetObjectiveAmount_Params params;
	params.missionLength = missionLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetInMissionText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOBJ_2nd_KillFleas_5_C::GetInMissionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetInMissionText");

	UOBJ_2nd_KillFleas_5_C_GetInMissionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetObjectiveDescription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         missionLength                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOBJ_2nd_KillFleas_5_C::GetObjectiveDescription(float* missionLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetObjectiveDescription");

	UOBJ_2nd_KillFleas_5_C_GetObjectiveDescription_Params params;
	params.missionLength = missionLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
