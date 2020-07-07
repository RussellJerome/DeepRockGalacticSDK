// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ChaCus_ItemSlot_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.GetTextToLeft
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           TextToLeft                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::GetTextToLeft(bool* TextToLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.GetTextToLeft");

	UITM_ChaCus_ItemSlot_Base_C_GetTextToLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextToLeft != nullptr)
		*TextToLeft = params.TextToLeft;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetHovered
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InSlotHovered                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::SetHovered(bool* InSlotHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetHovered");

	UITM_ChaCus_ItemSlot_Base_C_SetHovered_Params params;
	params.InSlotHovered = InSlotHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceivePreviewItem
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutSuccess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::ReceivePreviewItem(int* Index, bool* Show, bool* OutSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceivePreviewItem");

	UITM_ChaCus_ItemSlot_Base_C_ReceivePreviewItem_Params params;
	params.Index = Index;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSuccess != nullptr)
		*OutSuccess = params.OutSuccess;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetRefreshSlotsOnChange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UITM_ChaCus_ItemSlot_Base_C*> InOtherSlots                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UITM_ChaCus_ItemSlot_Base_C::SetRefreshSlotsOnChange(TArray<class UITM_ChaCus_ItemSlot_Base_C*>* InOtherSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetRefreshSlotsOnChange");

	UITM_ChaCus_ItemSlot_Base_C_SetRefreshSlotsOnChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOtherSlots != nullptr)
		*InOtherSlots = params.InOtherSlots;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveItemNotificationData
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         Array                          (Parm, OutParm, ZeroConstructor)

void UITM_ChaCus_ItemSlot_Base_C::ReceiveItemNotificationData(int* Index, TArray<class UObject*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveItemNotificationData");

	UITM_ChaCus_ItemSlot_Base_C_ReceiveItemNotificationData_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveInitialize
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AvailableItems                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::ReceiveInitialize(int* AvailableItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveInitialize");

	UITM_ChaCus_ItemSlot_Base_C_ReceiveInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableItems != nullptr)
		*AvailableItems = params.AvailableItems;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SelectorItemUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::SelectorItemUnhovered(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SelectorItemUnhovered");

	UITM_ChaCus_ItemSlot_Base_C_SelectorItemUnhovered_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SelectorItemHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::SelectorItemHovered(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SelectorItemHovered");

	UITM_ChaCus_ItemSlot_Base_C_SelectorItemHovered_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveGetSelectedIndex
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::ReceiveGetSelectedIndex(int* OutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveGetSelectedIndex");

	UITM_ChaCus_ItemSlot_Base_C_ReceiveGetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetItemName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InName                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_ChaCus_ItemSlot_Base_C::SetItemName(struct FText* InName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetItemName");

	UITM_ChaCus_ItemSlot_Base_C_SetItemName_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSlot_Base_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.Refresh");

	UITM_ChaCus_ItemSlot_Base_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SelectorItemClicked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutCloseSelector               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::SelectorItemClicked(int* Index, bool* OutCloseSelector)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SelectorItemClicked");

	UITM_ChaCus_ItemSlot_Base_C_SelectorItemClicked_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCloseSelector != nullptr)
		*OutCloseSelector = params.OutCloseSelector;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceivePreConstruct
// (Protected, BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSlot_Base_C::ReceivePreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceivePreConstruct");

	UITM_ChaCus_ItemSlot_Base_C_ReceivePreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.GetItemWidgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget*>         ItemWidgets                    (Parm, OutParm, ZeroConstructor)
// TArray<int>                    NewItemIndices                 (Parm, OutParm, ZeroConstructor)
// int                            OutSelectedIndex               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::GetItemWidgets(TArray<class UWidget*>* ItemWidgets, TArray<int>* NewItemIndices, int* OutSelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.GetItemWidgets");

	UITM_ChaCus_ItemSlot_Base_C_GetItemWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemWidgets != nullptr)
		*ItemWidgets = params.ItemWidgets;
	if (NewItemIndices != nullptr)
		*NewItemIndices = params.NewItemIndices;
	if (OutSelectedIndex != nullptr)
		*OutSelectedIndex = params.OutSelectedIndex;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveReleaseResource
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                InWidget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::ReceiveReleaseResource(class UWidget** InWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveReleaseResource");

	UITM_ChaCus_ItemSlot_Base_C_ReceiveReleaseResource_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetTextToLeft
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::SetTextToLeft(bool* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetTextToLeft");

	UITM_ChaCus_ItemSlot_Base_C_SetTextToLeft_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerCharacterID**     InCharacterID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::Initialize(class UPlayerCharacterID** InCharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.Initialize");

	UITM_ChaCus_ItemSlot_Base_C_Initialize_Params params;
	params.InCharacterID = InCharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetTypeIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::SetTypeIcon(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetTypeIcon");

	UITM_ChaCus_ItemSlot_Base_C_SetTypeIcon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetSlotName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_ChaCus_ItemSlot_Base_C::SetSlotName(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetSlotName");

	UITM_ChaCus_ItemSlot_Base_C_SetSlotName_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetSlotSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InSize                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::SetSlotSize(int* InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetSlotSize");

	UITM_ChaCus_ItemSlot_Base_C_SetSlotSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::SetSelected(bool* InSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetSelected");

	UITM_ChaCus_ItemSlot_Base_C_SetSelected_Params params;
	params.InSelected = InSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReleaseResources
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSlot_Base_C::ReleaseResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReleaseResources");

	UITM_ChaCus_ItemSlot_Base_C_ReleaseResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveEquipItem
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutSuccess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::ReceiveEquipItem(int* InIndex, bool* OutSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveEquipItem");

	UITM_ChaCus_ItemSlot_Base_C_ReceiveEquipItem_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSuccess != nullptr)
		*OutSuccess = params.OutSuccess;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveGenerateItems
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget*>         OutItemWidgets                 (Parm, OutParm, ZeroConstructor)

void UITM_ChaCus_ItemSlot_Base_C::ReceiveGenerateItems(TArray<class UWidget*>* OutItemWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveGenerateItems");

	UITM_ChaCus_ItemSlot_Base_C_ReceiveGenerateItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItemWidgets != nullptr)
		*OutItemWidgets = params.OutItemWidgets;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetContentAsWidgetClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UClass>*  InWidget                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUserWidget*             OutWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::SetContentAsWidgetClass(TSoftObjectPtr<class UClass>* InWidget, class UUserWidget** OutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetContentAsWidgetClass");

	UITM_ChaCus_ItemSlot_Base_C_SetContentAsWidgetClass_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetContentAsTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::SetContentAsTexture(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetContentAsTexture");

	UITM_ChaCus_ItemSlot_Base_C_SetContentAsTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetContentAsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                InWidget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::SetContentAsWidget(class UWidget** InWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetContentAsWidget");

	UITM_ChaCus_ItemSlot_Base_C_SetContentAsWidget_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.UpdateSelectionBorder
// (Private, BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSlot_Base_C::UpdateSelectionBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.UpdateSelectionBorder");

	UITM_ChaCus_ItemSlot_Base_C_UpdateSelectionBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_ChaCus_ItemSlot_Base_C::BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UITM_ChaCus_ItemSlot_Base_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_ChaCus_ItemSlot_Base_C::BndEvt__SlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UITM_ChaCus_ItemSlot_Base_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_ChaCus_ItemSlot_Base_C::BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UITM_ChaCus_ItemSlot_Base_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.RefreshNextFrame
// (BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSlot_Base_C::RefreshNextFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.RefreshNextFrame");

	UITM_ChaCus_ItemSlot_Base_C_RefreshNextFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.PreConstruct");

	UITM_ChaCus_ItemSlot_Base_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.PlayIntroAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsLeftSide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::PlayIntroAnim(bool* IsLeftSide, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.PlayIntroAnim");

	UITM_ChaCus_ItemSlot_Base_C_PlayIntroAnim_Params params;
	params.IsLeftSide = IsLeftSide;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ExecuteUbergraph_ITM_ChaCus_ItemSlot_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ChaCus_ItemSlot_Base_C::ExecuteUbergraph_ITM_ChaCus_ItemSlot_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ExecuteUbergraph_ITM_ChaCus_ItemSlot_Base");

	UITM_ChaCus_ItemSlot_Base_C_ExecuteUbergraph_ITM_ChaCus_ItemSlot_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.OnEquippedChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_ChaCus_ItemSlot_Base_C::OnEquippedChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.OnEquippedChanged__DelegateSignature");

	UITM_ChaCus_ItemSlot_Base_C_OnEquippedChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
