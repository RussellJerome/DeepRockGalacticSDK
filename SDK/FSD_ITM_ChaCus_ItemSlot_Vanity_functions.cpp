// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ChaCus_ItemSlot_Vanity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.GetItemName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCraftableObject**       InVanityItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm)

struct FText UITM_ChaCus_ItemSlot_Vanity_C::GetItemName(class UCraftableObject** InVanityItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.GetItemName");

	UITM_ChaCus_ItemSlot_Vanity_C_GetItemName_Params params;
	params.InVanityItem = InVanityItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.UpdateItemWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_GeneratedIcon_Item_C** InWidget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UVanityItem**            InVanityItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          In_Show_Tool_Tip               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Vanity_C::UpdateItemWidget(class UITM_GeneratedIcon_Item_C** InWidget, class UVanityItem** InVanityItem, bool* In_Show_Tool_Tip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.UpdateItemWidget");

	UITM_ChaCus_ItemSlot_Vanity_C_UpdateItemWidget_Params params;
	params.InWidget = InWidget;
	params.InVanityItem = InVanityItem;
	params.In_Show_Tool_Tip = In_Show_Tool_Tip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveEquipItem
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutSuccess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Vanity_C::ReceiveEquipItem(int* InIndex, bool* OutSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveEquipItem");

	UITM_ChaCus_ItemSlot_Vanity_C_ReceiveEquipItem_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSuccess != nullptr)
		*OutSuccess = params.OutSuccess;
}


// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceivePreviewItem
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutSuccess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Vanity_C::ReceivePreviewItem(int* Index, bool* Show, bool* OutSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceivePreviewItem");

	UITM_ChaCus_ItemSlot_Vanity_C_ReceivePreviewItem_Params params;
	params.Index = Index;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSuccess != nullptr)
		*OutSuccess = params.OutSuccess;
}


// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveItemNotificationData
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         Array                          (Parm, OutParm, ZeroConstructor)

void UITM_ChaCus_ItemSlot_Vanity_C::ReceiveItemNotificationData(int* Index, TArray<class UObject*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveItemNotificationData");

	UITM_ChaCus_ItemSlot_Vanity_C_ReceiveItemNotificationData_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveInitialize
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AvailableItems                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Vanity_C::ReceiveInitialize(int* AvailableItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveInitialize");

	UITM_ChaCus_ItemSlot_Vanity_C_ReceiveInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableItems != nullptr)
		*AvailableItems = params.AvailableItems;
}


// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveGetSelectedIndex
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Vanity_C::ReceiveGetSelectedIndex(int* OutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveGetSelectedIndex");

	UITM_ChaCus_ItemSlot_Vanity_C_ReceiveGetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;
}


// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.CreateItemWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVanityItem**            InVanityItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InBackgroundVisible            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InShowToolTip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UITM_GeneratedIcon_Item_C* OutItemWidget                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Vanity_C::CreateItemWidget(class UVanityItem** InVanityItem, bool* InBackgroundVisible, bool* InShowToolTip, class UITM_GeneratedIcon_Item_C** OutItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.CreateItemWidget");

	UITM_ChaCus_ItemSlot_Vanity_C_CreateItemWidget_Params params;
	params.InVanityItem = InVanityItem;
	params.InBackgroundVisible = InBackgroundVisible;
	params.InShowToolTip = InShowToolTip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItemWidget != nullptr)
		*OutItemWidget = params.OutItemWidget;
}


// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.SetSelectedItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVanityItem**            Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Equip                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Vanity_C::SetSelectedItem(class UVanityItem** Item, bool* Equip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.SetSelectedItem");

	UITM_ChaCus_ItemSlot_Vanity_C_SetSelectedItem_Params params;
	params.Item = Item;
	params.Equip = Equip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveGenerateItems
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget*>         OutItemWidgets                 (Parm, OutParm, ZeroConstructor)

void UITM_ChaCus_ItemSlot_Vanity_C::ReceiveGenerateItems(TArray<class UWidget*>* OutItemWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveGenerateItems");

	UITM_ChaCus_ItemSlot_Vanity_C_ReceiveGenerateItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItemWidgets != nullptr)
		*OutItemWidgets = params.OutItemWidgets;
}


// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveReleaseResource
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                InWidget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Vanity_C::ReceiveReleaseResource(class UWidget** InWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveReleaseResource");

	UITM_ChaCus_ItemSlot_Vanity_C_ReceiveReleaseResource_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceivePreConstruct
// (Protected, BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSlot_Vanity_C::ReceivePreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceivePreConstruct");

	UITM_ChaCus_ItemSlot_Vanity_C_ReceivePreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.On Initialized
// (BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSlot_Vanity_C::On_Initialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.On Initialized");

	UITM_ChaCus_ItemSlot_Vanity_C_On_Initialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ExecuteUbergraph_ITM_ChaCus_ItemSlot_Vanity
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Vanity_C::ExecuteUbergraph_ITM_ChaCus_ItemSlot_Vanity(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ExecuteUbergraph_ITM_ChaCus_ItemSlot_Vanity");

	UITM_ChaCus_ItemSlot_Vanity_C_ExecuteUbergraph_ITM_ChaCus_ItemSlot_Vanity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
