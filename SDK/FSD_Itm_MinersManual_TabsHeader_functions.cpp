// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Itm_MinersManual_TabsHeader_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  HeaderText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UItm_MinersManual_TabsHeader_C::SetSelected(int* Index, struct FText* HeaderText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.SetSelected");

	UItm_MinersManual_TabsHeader_C_SetSelected_Params params;
	params.Index = Index;
	params.HeaderText = HeaderText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItm_MinersManual_TabsHeader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.Construct");

	UItm_MinersManual_TabsHeader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.BndEvt__Itm_HeaderCategory1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UItm_MinersManual_TabsHeader_C::BndEvt__Itm_HeaderCategory1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.BndEvt__Itm_HeaderCategory1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UItm_MinersManual_TabsHeader_C_BndEvt__Itm_HeaderCategory1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.BndEvt__Itm_HeaderCategory2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UItm_MinersManual_TabsHeader_C::BndEvt__Itm_HeaderCategory2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.BndEvt__Itm_HeaderCategory2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UItm_MinersManual_TabsHeader_C_BndEvt__Itm_HeaderCategory2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class U_MENU_MinersManual_C**  _Menu_Lore                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItm_MinersManual_TabsHeader_C::SetData(class U_MENU_MinersManual_C** _Menu_Lore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.SetData");

	UItm_MinersManual_TabsHeader_C_SetData_Params params;
	params._Menu_Lore = _Menu_Lore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.ExecuteUbergraph_Itm_MinersManual_TabsHeader
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItm_MinersManual_TabsHeader_C::ExecuteUbergraph_Itm_MinersManual_TabsHeader(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_MinersManual_TabsHeader.Itm_MinersManual_TabsHeader_C.ExecuteUbergraph_Itm_MinersManual_TabsHeader");

	UItm_MinersManual_TabsHeader_C_ExecuteUbergraph_Itm_MinersManual_TabsHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
