// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDive_StageIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetClaimStatusActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDive_StageIcon_C::SetClaimStatusActive(bool* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetClaimStatusActive");

	UITM_DeepDive_StageIcon_C_SetClaimStatusActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_DeepDive_StageIcon_C::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetText");

	UITM_DeepDive_StageIcon_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDive_StageIcon_C::SetActive(bool* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.SetActive");

	UITM_DeepDive_StageIcon_C_SetActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDive_StageIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.PreConstruct");

	UITM_DeepDive_StageIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.ExecuteUbergraph_ITM_DeepDive_StageIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDive_StageIcon_C::ExecuteUbergraph_ITM_DeepDive_StageIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDive_StageIcon.ITM_DeepDive_StageIcon_C.ExecuteUbergraph_ITM_DeepDive_StageIcon");

	UITM_DeepDive_StageIcon_C_ExecuteUbergraph_ITM_DeepDive_StageIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
