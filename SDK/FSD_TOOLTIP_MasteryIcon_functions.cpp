// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TOOLTIP_MasteryIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.SetUnlocks
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUnlockReward*>   Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTOOLTIP_MasteryIcon_C::SetUnlocks(TArray<class UUnlockReward*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.SetUnlocks");

	UTOOLTIP_MasteryIcon_C_SetUnlocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_MasteryIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.PreConstruct");

	UTOOLTIP_MasteryIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.ExecuteUbergraph_TOOLTIP_MasteryIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_MasteryIcon_C::ExecuteUbergraph_TOOLTIP_MasteryIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.ExecuteUbergraph_TOOLTIP_MasteryIcon");

	UTOOLTIP_MasteryIcon_C_ExecuteUbergraph_TOOLTIP_MasteryIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
