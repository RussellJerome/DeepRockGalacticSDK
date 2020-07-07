// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Menu_RestoreSaves_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateCloudSaveList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFSDSaveGame*>    Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMenu_RestoreSaves_C::CreateCloudSaveList(TArray<class UFSDSaveGame*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateCloudSaveList");

	UMenu_RestoreSaves_C_CreateCloudSaveList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.ClearList
// (Public, BlueprintCallable, BlueprintEvent)

void UMenu_RestoreSaves_C::ClearList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.ClearList");

	UMenu_RestoreSaves_C_ClearList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateSaveList
// (Public, BlueprintCallable, BlueprintEvent)

void UMenu_RestoreSaves_C::CreateSaveList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateSaveList");

	UMenu_RestoreSaves_C_CreateSaveList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMenu_RestoreSaves_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.Construct");

	UMenu_RestoreSaves_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMenu_RestoreSaves_C::BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UMenu_RestoreSaves_C_BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.Back
// (BlueprintCallable, BlueprintEvent)

void UMenu_RestoreSaves_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.Back");

	UMenu_RestoreSaves_C_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnShown
// (Event, Public, BlueprintEvent)

void UMenu_RestoreSaves_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnShown");

	UMenu_RestoreSaves_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnClosed
// (Event, Public, BlueprintEvent)

void UMenu_RestoreSaves_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnClosed");

	UMenu_RestoreSaves_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UMenu_RestoreSaves_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.Refresh");

	UMenu_RestoreSaves_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloudFailed
// (BlueprintCallable, BlueprintEvent)

void UMenu_RestoreSaves_C::CloudFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloudFailed");

	UMenu_RestoreSaves_C_CloudFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloadSaveGames
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFSDSaveGame*>*   savegames                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMenu_RestoreSaves_C::CloadSaveGames(TArray<class UFSDSaveGame*>* savegames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloadSaveGames");

	UMenu_RestoreSaves_C_CloadSaveGames_Params params;
	params.savegames = savegames;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.ExecuteUbergraph_Menu_RestoreSaves
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_RestoreSaves_C::ExecuteUbergraph_Menu_RestoreSaves(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.ExecuteUbergraph_Menu_RestoreSaves");

	UMenu_RestoreSaves_C_ExecuteUbergraph_Menu_RestoreSaves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
