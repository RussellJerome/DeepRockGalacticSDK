// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RoundedCanvas_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_RoundedCanvas.UI_RoundedCanvas_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_RoundedCanvas_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RoundedCanvas.UI_RoundedCanvas_C.OnPaint");

	UUI_RoundedCanvas_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UI_RoundedCanvas.UI_RoundedCanvas_C.UpdateMaterial
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_RoundedCanvas_C::UpdateMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RoundedCanvas.UI_RoundedCanvas_C.UpdateMaterial");

	UUI_RoundedCanvas_C_UpdateMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RoundedCanvas.UI_RoundedCanvas_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RoundedCanvas_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RoundedCanvas.UI_RoundedCanvas_C.PreConstruct");

	UUI_RoundedCanvas_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_RoundedCanvas.UI_RoundedCanvas_C.ExecuteUbergraph_UI_RoundedCanvas
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_RoundedCanvas_C::ExecuteUbergraph_UI_RoundedCanvas(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RoundedCanvas.UI_RoundedCanvas_C.ExecuteUbergraph_UI_RoundedCanvas");

	UUI_RoundedCanvas_C_ExecuteUbergraph_UI_RoundedCanvas_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
