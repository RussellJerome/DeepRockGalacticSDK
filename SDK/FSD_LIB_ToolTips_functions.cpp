// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_ToolTips_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_ToolTips.LIB_ToolTips_C.CreateToolTip
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                ToolTipTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass**                 ToolTipClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             OutToolTip                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULIB_ToolTips_C::STATIC_CreateToolTip(class UWidget** ToolTipTarget, class UClass** ToolTipClass, struct FVector2D* Offset, class UObject** __WorldContext, class UUserWidget** OutToolTip)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_ToolTips.LIB_ToolTips_C.CreateToolTip");

	ULIB_ToolTips_C_CreateToolTip_Params params;
	params.ToolTipTarget = ToolTipTarget;
	params.ToolTipClass = ToolTipClass;
	params.Offset = Offset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutToolTip != nullptr)
		*OutToolTip = params.OutToolTip;
}


// Function LIB_ToolTips.LIB_ToolTips_C.CreateBiomeToolTip
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D*              Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Alignment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UResourceData**          ResourceA                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UResourceData**          ResourceB                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBiome_ToolTip_C*        ToolTipWidget                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULIB_ToolTips_C::STATIC_CreateBiomeToolTip(class UWidget** Target, struct FVector2D* Position, struct FVector2D* Alignment, class UResourceData** ResourceA, class UResourceData** ResourceB, class UObject** __WorldContext, class UBiome_ToolTip_C** ToolTipWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_ToolTips.LIB_ToolTips_C.CreateBiomeToolTip");

	ULIB_ToolTips_C_CreateBiomeToolTip_Params params;
	params.Target = Target;
	params.Position = Position;
	params.Alignment = Alignment;
	params.ResourceA = ResourceA;
	params.ResourceB = ResourceB;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ToolTipWidget != nullptr)
		*ToolTipWidget = params.ToolTipWidget;
}


// Function LIB_ToolTips.LIB_ToolTips_C.CreateBasicToolTip
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D*              Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Alignment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBasic_ToolTip_C*        ToolTipWidget                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULIB_ToolTips_C::STATIC_CreateBasicToolTip(class UWidget** Target, struct FText* Text, struct FVector2D* Position, struct FVector2D* Alignment, class UObject** __WorldContext, class UBasic_ToolTip_C** ToolTipWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_ToolTips.LIB_ToolTips_C.CreateBasicToolTip");

	ULIB_ToolTips_C_CreateBasicToolTip_Params params;
	params.Target = Target;
	params.Text = Text;
	params.Position = Position;
	params.Alignment = Alignment;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ToolTipWidget != nullptr)
		*ToolTipWidget = params.ToolTipWidget;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
