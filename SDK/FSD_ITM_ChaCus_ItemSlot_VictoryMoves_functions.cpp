// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ChaCus_ItemSlot_VictoryMoves_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceiveEquipItem
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutSuccess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_VictoryMoves_C::ReceiveEquipItem(int* InIndex, bool* OutSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceiveEquipItem");

	UITM_ChaCus_ItemSlot_VictoryMoves_C_ReceiveEquipItem_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSuccess != nullptr)
		*OutSuccess = params.OutSuccess;
}


// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.PreviewItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVictoryPose**           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutSuccess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_VictoryMoves_C::PreviewItem(class UVictoryPose** Item, bool* Show, bool* OutSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.PreviewItem");

	UITM_ChaCus_ItemSlot_VictoryMoves_C_PreviewItem_Params params;
	params.Item = Item;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSuccess != nullptr)
		*OutSuccess = params.OutSuccess;
}


// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceivePreviewItem
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutSuccess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_VictoryMoves_C::ReceivePreviewItem(int* Index, bool* Show, bool* OutSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceivePreviewItem");

	UITM_ChaCus_ItemSlot_VictoryMoves_C_ReceivePreviewItem_Params params;
	params.Index = Index;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSuccess != nullptr)
		*OutSuccess = params.OutSuccess;
}


// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceiveItemNotificationData
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         Array                          (Parm, OutParm, ZeroConstructor)

void UITM_ChaCus_ItemSlot_VictoryMoves_C::ReceiveItemNotificationData(int* Index, TArray<class UObject*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceiveItemNotificationData");

	UITM_ChaCus_ItemSlot_VictoryMoves_C_ReceiveItemNotificationData_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceiveInitialize
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AvailableItems                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_VictoryMoves_C::ReceiveInitialize(int* AvailableItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceiveInitialize");

	UITM_ChaCus_ItemSlot_VictoryMoves_C_ReceiveInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableItems != nullptr)
		*AvailableItems = params.AvailableItems;
}


// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceiveGetSelectedIndex
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_VictoryMoves_C::ReceiveGetSelectedIndex(int* OutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceiveGetSelectedIndex");

	UITM_ChaCus_ItemSlot_VictoryMoves_C_ReceiveGetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;
}


// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.UpdateOrCreateItemWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVictoryPose**           InVictoryMove                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                InReuseWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          InShowToolTip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 OutWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSlot_VictoryMoves_C::UpdateOrCreateItemWidget(class UVictoryPose** InVictoryMove, class UWidget** InReuseWidget, bool* InShowToolTip, class UWidget** OutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.UpdateOrCreateItemWidget");

	UITM_ChaCus_ItemSlot_VictoryMoves_C_UpdateOrCreateItemWidget_Params params;
	params.InVictoryMove = InVictoryMove;
	params.InReuseWidget = InReuseWidget;
	params.InShowToolTip = InShowToolTip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceiveGenerateItems
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget*>         OutItemWidgets                 (Parm, OutParm, ZeroConstructor)

void UITM_ChaCus_ItemSlot_VictoryMoves_C::ReceiveGenerateItems(TArray<class UWidget*>* OutItemWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceiveGenerateItems");

	UITM_ChaCus_ItemSlot_VictoryMoves_C_ReceiveGenerateItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItemWidgets != nullptr)
		*OutItemWidgets = params.OutItemWidgets;
}


// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.UpdateEquipped
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSlot_VictoryMoves_C::UpdateEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.UpdateEquipped");

	UITM_ChaCus_ItemSlot_VictoryMoves_C_UpdateEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceivePreConstruct
// (Protected, BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSlot_VictoryMoves_C::ReceivePreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceivePreConstruct");

	UITM_ChaCus_ItemSlot_VictoryMoves_C_ReceivePreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.SetHovered
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InSlotHovered                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_VictoryMoves_C::SetHovered(bool* InSlotHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.SetHovered");

	UITM_ChaCus_ItemSlot_VictoryMoves_C_SetHovered_Params params;
	params.InSlotHovered = InSlotHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ExecuteUbergraph_ITM_ChaCus_ItemSlot_VictoryMoves
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_VictoryMoves_C::ExecuteUbergraph_ITM_ChaCus_ItemSlot_VictoryMoves(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ExecuteUbergraph_ITM_ChaCus_ItemSlot_VictoryMoves");

	UITM_ChaCus_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_ChaCus_ItemSlot_VictoryMoves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
