// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_WeeklyRequirement_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.DoubleDigit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UITM_WeeklyRequirement_C::DoubleDigit(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.DoubleDigit");

	UITM_WeeklyRequirement_C_DoubleDigit_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.GetTimeText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText*                  Message_                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTimespan*              Timespan                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   Result                         (Parm, OutParm)

void UITM_WeeklyRequirement_C::GetTimeText(struct FText* Message_, struct FTimespan* Timespan, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.GetTimeText");

	UITM_WeeklyRequirement_C_GetTimeText_Params params;
	params.Message_ = Message_;
	params.Timespan = Timespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_WeeklyRequirement_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.PreConstruct");

	UITM_WeeklyRequirement_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_WeeklyRequirement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.Construct");

	UITM_WeeklyRequirement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.Update Time
// (BlueprintCallable, BlueprintEvent)

void UITM_WeeklyRequirement_C::Update_Time()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.Update Time");

	UITM_WeeklyRequirement_C_Update_Time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.ExecuteUbergraph_ITM_WeeklyRequirement
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_WeeklyRequirement_C::ExecuteUbergraph_ITM_WeeklyRequirement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.ExecuteUbergraph_ITM_WeeklyRequirement");

	UITM_WeeklyRequirement_C_ExecuteUbergraph_ITM_WeeklyRequirement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
