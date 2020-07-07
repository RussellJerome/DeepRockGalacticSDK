// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MENU_Forge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MENU_Forge.MENU_Forge_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMENU_Forge_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.OnMouseButtonUp");

	UMENU_Forge_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MENU_Forge.MENU_Forge_C.ToggleMasteryBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_Forge_C::ToggleMasteryBar(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.ToggleMasteryBar");

	UMENU_Forge_C_ToggleMasteryBar_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.Forge Schematic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Forge_Schematic_C**  InSchematic                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMENU_Forge_C::Forge_Schematic(class UUI_Forge_Schematic_C** InSchematic, bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.Forge Schematic");

	UMENU_Forge_C_Forge_Schematic_Params params;
	params.InSchematic = InSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (success != nullptr)
		*success = params.success;
}


// Function MENU_Forge.MENU_Forge_C.ToggleItemPopUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_Forge_C::ToggleItemPopUp(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.ToggleItemPopUp");

	UMENU_Forge_C_ToggleItemPopUp_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.ToggleSelectionList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_Forge_C::ToggleSelectionList(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.ToggleSelectionList");

	UMENU_Forge_C_ToggleSelectionList_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.IncreaseCraftingStat
// (Public, BlueprintCallable, BlueprintEvent)

void UMENU_Forge_C::IncreaseCraftingStat()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.IncreaseCraftingStat");

	UMENU_Forge_C_IncreaseCraftingStat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.SetHeader
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UMENU_Forge_C::SetHeader(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.SetHeader");

	UMENU_Forge_C_SetHeader_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMENU_Forge_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.OnKeyUp");

	UMENU_Forge_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MENU_Forge.MENU_Forge_C.ShowList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          History                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Force_Rebuild                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_Forge_C::ShowList(bool* History, bool* Force_Rebuild)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.ShowList");

	UMENU_Forge_C_ShowList_Params params;
	params.History = History;
	params.Force_Rebuild = Force_Rebuild;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.ShowItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Forge_Schematic_C**  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMENU_Forge_C::ShowItem(class UUI_Forge_Schematic_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.ShowItem");

	UMENU_Forge_C_ShowItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UMENU_Forge_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.Refresh");

	UMENU_Forge_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.UpdateLevelProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          animate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_Forge_C::UpdateLevelProgress(bool* animate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.UpdateLevelProgress");

	UMENU_Forge_C_UpdateLevelProgress_Params params;
	params.animate = animate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_Forge_Schematic_C**  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMENU_Forge_C::BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature(class UUI_Forge_Schematic_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature");

	UMENU_Forge_C_BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__ForgeBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_Forge_C::BndEvt__ForgeBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.BndEvt__ForgeBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UMENU_Forge_C_BndEvt__ForgeBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.OnShown
// (Event, Public, BlueprintEvent)

void UMENU_Forge_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.OnShown");

	UMENU_Forge_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_8_OnBackClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_Forge_C::BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_8_OnBackClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_8_OnBackClicked__DelegateSignature");

	UMENU_Forge_C_BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_8_OnBackClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__CancelForgeBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_Forge_C::BndEvt__CancelForgeBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.BndEvt__CancelForgeBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UMENU_Forge_C_BndEvt__CancelForgeBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_Forge_C::BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UMENU_Forge_C_BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.ForgeDone
// (BlueprintCallable, BlueprintEvent)

void UMENU_Forge_C::ForgeDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.ForgeDone");

	UMENU_Forge_C_ForgeDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_Completed_K2Node_ComponentBoundEvent_3_OnFinished__DelegateSignature
// (BlueprintEvent)

void UMENU_Forge_C::BndEvt__UI_Forge_Completed_K2Node_ComponentBoundEvent_3_OnFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_Completed_K2Node_ComponentBoundEvent_3_OnFinished__DelegateSignature");

	UMENU_Forge_C_BndEvt__UI_Forge_Completed_K2Node_ComponentBoundEvent_3_OnFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// unsigned char*                 Reward                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_Forge_C::BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature(unsigned char* Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature");

	UMENU_Forge_C_BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_MasteryReward_K2Node_ComponentBoundEvent_6_OnFinished__DelegateSignature
// (BlueprintEvent)

void UMENU_Forge_C::BndEvt__UI_Forge_MasteryReward_K2Node_ComponentBoundEvent_6_OnFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_MasteryReward_K2Node_ComponentBoundEvent_6_OnFinished__DelegateSignature");

	UMENU_Forge_C_BndEvt__UI_Forge_MasteryReward_K2Node_ComponentBoundEvent_6_OnFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.Display Pending Mastery Reward
// (BlueprintCallable, BlueprintEvent)

void UMENU_Forge_C::Display_Pending_Mastery_Reward()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.Display Pending Mastery Reward");

	UMENU_Forge_C_Display_Pending_Mastery_Reward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.OnForgingXPChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         XP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_Forge_C::OnForgingXPChanged_Event(float* XP)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.OnForgingXPChanged_Event");

	UMENU_Forge_C_OnForgingXPChanged_Event_Params params;
	params.XP = XP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_Forge_C::BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UMENU_Forge_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMENU_Forge_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.Construct");

	UMENU_Forge_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.ShoutLocally
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDialogDataAsset**       ShoutData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_Forge_C::ShoutLocally(float* Delay, class UDialogDataAsset** ShoutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.ShoutLocally");

	UMENU_Forge_C_ShoutLocally_Params params;
	params.Delay = Delay;
	params.ShoutData = ShoutData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_Forge_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.PreConstruct");

	UMENU_Forge_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.ShoutLocallySoftPtr
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TSoftObjectPtr<class UDialogDataAsset>* ShoutData                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UMENU_Forge_C::ShoutLocallySoftPtr(float* Delay, TSoftObjectPtr<class UDialogDataAsset>* ShoutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.ShoutLocallySoftPtr");

	UMENU_Forge_C_ShoutLocallySoftPtr_Params params;
	params.Delay = Delay;
	params.ShoutData = ShoutData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.OnClosed
// (Event, Public, BlueprintEvent)

void UMENU_Forge_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.OnClosed");

	UMENU_Forge_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Forge.MENU_Forge_C.ExecuteUbergraph_MENU_Forge
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_Forge_C::ExecuteUbergraph_MENU_Forge(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Forge.MENU_Forge_C.ExecuteUbergraph_MENU_Forge");

	UMENU_Forge_C_ExecuteUbergraph_MENU_Forge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
