// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_PerkColors_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_PerkColors.LIB_PerkColors_C.PerkColorFromType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPerkUsageType*                InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OutColor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_PerkColors_C::STATIC_PerkColorFromType(EPerkUsageType* InType, class UObject** __WorldContext, struct FLinearColor* OutColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_PerkColors.LIB_PerkColors_C.PerkColorFromType");

	ULIB_PerkColors_C_PerkColorFromType_Params params;
	params.InType = InType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutColor != nullptr)
		*OutColor = params.OutColor;
}


// Function LIB_PerkColors.LIB_PerkColors_C.PerkColorByState
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPerkUsageType*                InPerkType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPerkTierState*                InPerkState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OutBackground                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OutBorder                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            OutIcon                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_PerkColors_C::STATIC_PerkColorByState(EPerkUsageType* InPerkType, EPerkTierState* InPerkState, class UObject** __WorldContext, struct FLinearColor* OutBackground, struct FLinearColor* OutBorder, struct FLinearColor* OutIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_PerkColors.LIB_PerkColors_C.PerkColorByState");

	ULIB_PerkColors_C_PerkColorByState_Params params;
	params.InPerkType = InPerkType;
	params.InPerkState = InPerkState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBackground != nullptr)
		*OutBackground = params.OutBackground;
	if (OutBorder != nullptr)
		*OutBorder = params.OutBorder;
	if (OutIcon != nullptr)
		*OutIcon = params.OutIcon;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
